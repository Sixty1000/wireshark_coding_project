// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once
#include <QCryptographicHash>
#include <QHostAddress>
#include <QRegularExpression>
#include <QString>
#include <stdexcept>

namespace mineshark {
struct Pair {
    QString a, b;
    bool ipv6;
    static Pair parse(const QString &source, const QString &destination) {
        QHostAddress a, b;
        if (source.contains('%') || destination.contains('%') || !a.setAddress(source) || !b.setAddress(destination)
            || a.protocol() != b.protocol() || a == b || a.isNull() || b.isNull()
            || a.isMulticast() || b.isMulticast() || a == QHostAddress::Broadcast || b == QHostAddress::Broadcast)
            throw std::runtime_error("Select two distinct unicast IP addresses of the same family.");
        // Reject mapped IPv6 to keep packet-family matching unambiguous.
        if (a.protocol() == QAbstractSocket::IPv6Protocol &&
            (a.toString().contains('.') || b.toString().contains('.')))
            throw std::runtime_error("IPv4-mapped IPv6 endpoints are not supported.");
        QString first = a.toString(), second = b.toString();
        if (first > second) std::swap(first, second);
        return {first, second, a.protocol() == QAbstractSocket::IPv6Protocol};
    }
    QString table() const {
        return "mineshark_" + QString::fromLatin1(QCryptographicHash::hash((a + "|" + b).toUtf8(), QCryptographicHash::Sha256).toHex().left(24));
    }
    QString comment() const { return "mineshark-v1|" + a + "|" + b; }
    QString script() const {
        const QString family = ipv6 ? "ip6" : "ip";
        const QString type = ipv6 ? "ipv6_addr" : "ipv4_addr";
        QString text = "table inet " + table() + " {\n comment \"" + comment() + "\"\n"
            " set endpoints { type " + type + " . " + type + "; flags timeout; timeout 1h;\n"
            "  elements = { " + a + " . " + b + " timeout 1h, " + b + " . " + a + " timeout 1h }\n }\n";
        for (const QString &hook : {QString("input"), QString("output"), QString("forward")})
            text += " chain " + hook + " { type filter hook " + hook + " priority -10; policy accept;\n  "
                + family + " saddr . " + family + " daddr @endpoints counter drop comment \"Minesweeper Victory\"\n }\n";
        return text + "}\n";
    }
};
inline bool ownedTableName(const QString &name) {
    return QRegularExpression("^mineshark_[0-9a-f]{24}$").match(name).hasMatch();
}
}
