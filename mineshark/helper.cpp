// SPDX-License-Identifier: GPL-2.0-or-later
// Root-only, fixed-command nftables adapter. No shell and no caller-supplied paths.
#include "firewall_plan.h"
#include <QCoreApplication>
#include <QFileInfo>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QProcess>
#include <QProcessEnvironment>
#include <QTextStream>
#include <sys/file.h>
#include <fcntl.h>
#include <unistd.h>
#include <iostream>

namespace {
QString nft;
QByteArray run(const QStringList &args, const QByteArray &input = {}) {
    QProcess p;
    QProcessEnvironment clean;
    clean.insert("PATH", "/usr/sbin:/usr/bin:/sbin:/bin");
    clean.insert("LC_ALL", "C");
    p.setProcessEnvironment(clean);
    p.start(nft, args);
    if (!p.waitForStarted(5000)) throw std::runtime_error("Cannot start nftables. Install nftables on this Linux VM.");
    if (!input.isEmpty()) p.write(input);
    p.closeWriteChannel();
    if (!p.waitForFinished(15000)) { p.kill(); p.waitForFinished(); throw std::runtime_error("nftables timed out."); }
    if (p.exitStatus() != QProcess::NormalExit || p.exitCode() != 0)
        throw std::runtime_error(p.readAllStandardError().trimmed().toStdString());
    return p.readAllStandardOutput();
}
QJsonArray query(const QStringList &args) {
    QJsonParseError error;
    const auto document = QJsonDocument::fromJson(run(QStringList{"-j"} + args), &error);
    if (error.error != QJsonParseError::NoError || !document.object().value("nftables").isArray())
        throw std::runtime_error("Invalid nftables JSON response.");
    return document.object().value("nftables").toArray();
}
QStringList tables() {
    QStringList names;
    for (const auto &entry : query({"list", "tables"})) {
        const auto t = entry.toObject().value("table").toObject();
        if (t.value("family") == "inet" && mineshark::ownedTableName(t.value("name").toString()))
            names.append(t.value("name").toString());
    }
    return names;
}
QJsonObject status() {
    QJsonArray blocks;
    for (const auto &name : tables()) {
        const auto entries = query({"list", "table", "inet", name});
        QString comment;
        int seconds = 0;
        for (const auto &entry : entries) {
            const auto obj = entry.toObject();
            if (obj.contains("table")) comment = obj.value("table").toObject().value("comment").toString();
            const auto set = obj.value("set").toObject();
            if (set.value("name") == "endpoints")
                for (const auto &element : set.value("elem").toArray()) {
                    const auto data = element.toObject().value("elem").toObject();
                    // nft JSON time values are seconds, unlike raw netlink milliseconds.
                    seconds = qMax(seconds, data.value("expires").toInt());
                }
        }
        const auto parts = comment.split('|');
        if (parts.size() != 3 || parts[0] != "mineshark-v1") continue;
        const auto pair = mineshark::Pair::parse(parts[1], parts[2]);
        if (pair.table() != name) continue;
        if (seconds > 0) blocks.append(QJsonObject{{"source", pair.a}, {"destination", pair.b}, {"expiresSeconds", seconds}});
    }
    return {{"blocks", blocks}};
}
}
int main(int argc, char **argv) {
    QCoreApplication app(argc, argv);
    try {
        const auto args = app.arguments();
        if (args.size() < 2 || !(args[1] == "status" || args[1] == "block" || args[1] == "unblock" || args[1] == "unblock-all"))
            throw std::runtime_error("Usage: mineshark-helper status | block IP IP | unblock IP IP | unblock-all");
        const bool hasPair = args[1] == "block" || args[1] == "unblock";
        if (args.size() != (hasPair ? 4 : 2)) throw std::runtime_error("Incorrect argument count.");
        // Validate before checking privilege; malformed input never reaches nft.
        mineshark::Pair pair = hasPair ? mineshark::Pair::parse(args[2], args[3]) : mineshark::Pair{};
        if (geteuid() != 0) throw std::runtime_error("Administrator authorization is required. Launch this helper through pkexec.");
        for (const auto &candidate : {QString("/usr/sbin/nft"), QString("/sbin/nft")})
            if (QFileInfo(candidate).isExecutable()) { nft = candidate; break; }
        if (nft.isEmpty()) throw std::runtime_error("nftables is not installed. Install the nftables package; iptables is not used.");
        const int lock = open("/run/mineshark.lock", O_CREAT | O_RDWR | O_CLOEXEC | O_NOFOLLOW, 0600);
        if (lock < 0 || flock(lock, LOCK_EX) != 0) throw std::runtime_error("Cannot lock Mineshark firewall operations.");
        if (args[1] == "block") {
            const bool exists = tables().contains(pair.table());
            const QString transaction = (exists ? "delete table inet " + pair.table() + "\n" : "") + pair.script();
            run({"-f", "-"}, transaction.toUtf8());
        } else if (args[1] == "unblock") {
            if (tables().contains(pair.table())) run({"delete", "table", "inet", pair.table()});
        } else if (args[1] == "unblock-all") {
            QString transaction;
            for (const auto &name : tables()) transaction += "delete table inet " + name + "\n";
            if (!transaction.isEmpty()) run({"-f", "-"}, transaction.toUtf8());
        }
        // Mutations return an acknowledgement. Listing is a separate operation so
        // a failed status query cannot misreport a successful block as a failure.
        const QJsonObject result = args[1] == "status" ? status() : QJsonObject{{"ok", true}};
        std::cout << QJsonDocument(result).toJson(QJsonDocument::Compact).constData() << '\n';
        close(lock);
        return 0;
    } catch (const std::exception &e) {
        std::cerr << "Mineshark: " << e.what() << '\n';
        return 1;
    }
}
