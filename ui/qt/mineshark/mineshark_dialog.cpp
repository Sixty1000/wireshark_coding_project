// SPDX-License-Identifier: GPL-2.0-or-later
#include "mineshark_dialog.h"
#include "mineshark/firewall_plan.h"
#include <QCoreApplication>
#include <QDateTime>
#include <QFileInfo>
#include <QGridLayout>
#include <QHeaderView>
#include <QJsonDocument>
#include <QJsonObject>
#include <QLabel>
#include <QMessageBox>
#include <QPushButton>
#include <QRandomGenerator>
#include <QScreen>
#include <QScrollArea>
#include <QStyle>
#include <QTableWidget>
#include <QTime>
#include <QVBoxLayout>

namespace mineshark {
QString styleSheet() {
    return R"(
        QLabel#title, QLabel#endpoint, QLabel#state { font-weight: bold; }
        QPushButton#cell { padding: 0; font-weight: bold; }
        QPushButton#cell[open="true"] { border: 1px solid palette(mid); background: palette(base); }
        QPushButton#cell[mine="true"] { background: #ffb0b0; color: black; }
    )";
}
static QLabel *label(const QString &text, const char *name = nullptr) {
    auto *widget = new QLabel(text);
    if (name) widget->setObjectName(name);
    widget->setTextFormat(Qt::PlainText);
    return widget;
}
FirewallClient::FirewallClient(bool simulation, QObject *parent) : QObject(parent), simulation_(simulation) {
    connect(&process_, qOverload<int, QProcess::ExitStatus>(&QProcess::finished), this, [this](int code, QProcess::ExitStatus exit) {
        if (!pending_) return;
        if (exit != QProcess::NormalExit || code != 0) {
            QString error = QString::fromUtf8(process_.readAllStandardError()).trimmed();
            if (error.isEmpty()) error = "Authorization was canceled or the firewall helper failed.";
            finish(false, error); return;
        }
        QJsonParseError error;
        const auto document = QJsonDocument::fromJson(process_.readAllStandardOutput(), &error);
        const auto object = document.object();
        if (error.error != QJsonParseError::NoError ||
            (command_ == "status" ? !object.value("blocks").isArray() : !object.value("ok").toBool())) {
            finish(false, "The helper returned an invalid response. Refresh Active Blocks before retrying."); return;
        }
        finish(true, {}, object.value("blocks").toArray());
    });
    connect(&process_, &QProcess::errorOccurred, this, [this](QProcess::ProcessError error) {
        if (pending_ && error == QProcess::FailedToStart) finish(false, "Could not start pkexec. Install polkit and the Mineshark helper.");
    });
}
void FirewallClient::finish(bool success, const QString &error, const QJsonArray &blocks) {
    const QString command = command_;
    pending_ = false;
    emit completed(command, success, error, blocks);
}
void FirewallClient::request(const QString &command, const QString &a, const QString &b) {
    if (busy()) return;
    command_ = command;
    pending_ = true;
    if (simulation_) {
        QTimer::singleShot(120, this, [this, command, a, b] {
            try {
                if (command == "block" || command == "unblock") {
                    const auto pair = Pair::parse(a, b);
                    for (int i = simulated_.size() - 1; i >= 0; --i)
                        if (simulated_[i].toObject().value("source") == pair.a && simulated_[i].toObject().value("destination") == pair.b)
                            simulated_.removeAt(i);
                    if (command == "block") simulated_.append(QJsonObject{{"source", pair.a}, {"destination", pair.b}, {"expiresSeconds", 3600}});
                } else if (command == "unblock-all") simulated_ = {};
                finish(true, {}, simulated_);
            } catch (const std::exception &e) { finish(false, QString::fromUtf8(e.what())); }
        });
        return;
    }
#ifdef Q_OS_LINUX
    const QString helper = "/usr/libexec/mineshark-helper";
    if (!QFileInfo(helper).isExecutable() || QFileInfo(helper).ownerId() != 0 ||
        (QFileInfo(helper).permissions() & (QFileDevice::WriteGroup | QFileDevice::WriteOther))) {
        QTimer::singleShot(0, this, [this] { finish(false, "Install the root-owned helper first: sudo mineshark/scripts/install-helper.sh <helper-binary>. See MINESHARK.md."); });
        return;
    }
    QStringList args{helper, command};
    if (command == "block" || command == "unblock") args << a << b;
    process_.start("/usr/bin/pkexec", args);
#else
    QTimer::singleShot(0, this, [this] { finish(false, "Live containment requires Linux and nftables. Use the standalone simulation to preview the game."); });
#endif
}

ChallengeDialog::ChallengeDialog(const QString &source, const QString &destination, FirewallClient *client, QWidget *parent) :
    QDialog(parent), source_(source), destination_(destination), client_(client), board_(QRandomGenerator::global()->generate()) {
    setWindowTitle("Mineshark · Network Control");
    setObjectName("minesharkChallenge");
    setStyleSheet(mineshark::styleSheet());
    setMinimumWidth(580);
    auto *outer = new QVBoxLayout(this);
    outer->setContentsMargins(0, 0, 0, 0);
    scroll_ = new QScrollArea;
    scroll_->setWidgetResizable(true);
    auto *body = new QWidget;
    body->setObjectName("challengeBody");
    scroll_->setWidget(body);
    outer->addWidget(scroll_);
    auto *layout = new QVBoxLayout(body);
    layout->setContentsMargins(12, 12, 12, 12);
    layout->setSpacing(15);
    auto *top = new QHBoxLayout;
    top->addWidget(label("MINESHARK  /  NETWORK CONTROL", "eyebrow"));
    top->addStretch();
    top->addWidget(label(client_->simulation() ? "SIMULATION" : "LIVE FIREWALL", "subtle"));
    layout->addLayout(top);
    layout->addWidget(label("Minesweeper", "title"));
    layout->addWidget(label(client_->simulation() ? "Preview mode · no network traffic will be changed." : "Victory blocks all traffic between these IPs on this VM.", "subtle"));
    auto *pair = new QFrame;
    pair->setObjectName("panel");
    auto *pairLayout = new QGridLayout(pair);
    pairLayout->setContentsMargins(18, 16, 18, 16);
    pairLayout->addWidget(label("SOURCE PLAYER", "eyebrow"), 0, 0);
    pairLayout->addWidget(label("DESTINATION PLAYER", "eyebrow"), 0, 2);
    auto *sourceLabel = label(source_, "endpoint");
    auto *destinationLabel = label(destination_, "endpoint");
    if (source_.size() > 16 || destination_.size() > 16) {
        sourceLabel->setStyleSheet("font-size: 13px;"); destinationLabel->setStyleSheet("font-size: 13px;");
    }
    pairLayout->addWidget(sourceLabel, 1, 0);
    pairLayout->addWidget(label("VS", "subtle"), 1, 1);
    pairLayout->addWidget(destinationLabel, 1, 2);
    layout->addWidget(pair);
    auto *metrics = new QHBoxLayout;
    metrics->addWidget(label("BEGINNER  ·  8 × 8", "counter"));
    metrics->addStretch();
    mineLabel_ = label("", "counter"); metrics->addWidget(mineLabel_);
    metrics->addSpacing(22);
    timeLabel_ = label("00:00", "counter"); metrics->addWidget(timeLabel_);
    layout->addLayout(metrics);
    auto *grid = new QGridLayout;
    grid->setSpacing(1);
    for (int i = 0; i < Board::size; ++i) {
        auto *cell = new QPushButton;
        cell->setObjectName("cell");
        cell->setFixedSize(32, 32);
        cell->setContextMenuPolicy(Qt::CustomContextMenu);
        cell->setAccessibleName(QString("Row %1 column %2, hidden").arg(i / Board::side + 1).arg(i % Board::side + 1));
        cell->setProperty("index", i);
        connect(cell, &QPushButton::clicked, this, [this, i] { reveal(i); });
        connect(cell, &QPushButton::customContextMenuRequested, this, [this, i] { if (!blocked_ && !pending_) { board_.toggleFlag(i); render(); } });
        grid->addWidget(cell, i / Board::side, i % Board::side);
        cells_[i] = cell;
    }
    layout->addLayout(grid);
    layout->setAlignment(grid, Qt::AlignHCenter);
    layout->addWidget(label("Left click to reveal  ·  Right click to flag  ·  First click is safe", "subtle"));
    stateLabel_ = label("WIN TO TERMINATE THIS CONNECTION", "state");
    stateLabel_->setObjectName("state");
    stateLabel_->setWordWrap(true);
    layout->addWidget(stateLabel_);
    detailLabel_ = label("Reveal all 54 safe cells. Ten mines stand between you and victory.", "subtle");
    detailLabel_->setWordWrap(true);
    detailLabel_->setMinimumHeight(44);
    layout->addWidget(detailLabel_);
    auto *bottom = new QHBoxLayout;
    restart_ = new QPushButton("New board"); restart_->setObjectName("newBoard");
    connect(restart_, &QPushButton::clicked, this, &ChallengeDialog::reset);
    bottom->addWidget(restart_);
    bottom->addStretch();
    primary_ = new QPushButton("Challenge active"); primary_->setObjectName("primary"); primary_->setEnabled(false);
    connect(primary_, &QPushButton::clicked, this, [this] {
        if (blocked_) {
            pending_ = true; primary_->setEnabled(false); primary_->setText("Restoring…");
            client_->request("unblock", source_, destination_);
        } else contain();
    });
    bottom->addWidget(primary_);
    layout->addLayout(bottom);
    clock_.setInterval(1000);
    connect(&clock_, &QTimer::timeout, this, [this] {
        const qint64 seconds = elapsed_.elapsed() / 1000;
        timeLabel_->setText(QString("%1:%2").arg(seconds / 60, 2, 10, QChar('0')).arg(seconds % 60, 2, 10, QChar('0')));
    });
    connect(client_, &FirewallClient::completed, this, [this](const QString &command, bool success, const QString &error, const QJsonArray &) {
        if (!pending_ || (command != "block" && command != "unblock")) return;
        pending_ = false;
        primary_->setEnabled(true);
        if (!success) {
            restart_->setEnabled(!blocked_);
            stateLabel_->setText(command == "block" ? "VICTORY · BLOCK NOT CONFIRMED" : "RESTORE NOT CONFIRMED");
            detailLabel_->setText(error + "\nCheck Security → Minesweeper Blocks before retrying.");
            primary_->setText(command == "block" ? "Retry containment" : "Retry restore");
            return;
        }
        blocked_ = command == "block";
        if (blocked_) {
            stateLabel_->setText(client_->simulation() ? "CONNECTION VANQUISHED · SIMULATED" : "CONNECTION VANQUISHED");
            detailLabel_->setText("Reason: Minesweeper Victory  ·  Status: " + QString(client_->simulation() ? "SIMULATED BLOCK" : "BLOCKED") + "\nBidirectional IP block · auto-expires in one hour.");
            primary_->setText("Restore Connection");
            restart_->setEnabled(false);
        } else {
            stateLabel_->setText("CONNECTION RESTORED");
            detailLabel_->setText(client_->simulation() ? "Simulated block removed. No firewall rules were changed." : "Mineshark's block was removed. Traffic can resume if other firewall rules permit it.");
            primary_->setText("Restored"); primary_->setEnabled(false); restart_->setEnabled(true);
        }
        QTimer::singleShot(0, this, [this] { scroll_->ensureWidgetVisible(primary_, 0, 16); });
    });
    render();
    const int available = screen() ? screen()->availableGeometry().height() - 80 : 900;
    resize(580, qMin(920, qMax(400, available)));
}
void ChallengeDialog::reset() {
    if (pending_ || blocked_) return;
    clock_.stop(); board_ = Board(QRandomGenerator::global()->generate());
    timeLabel_->setText("00:00"); stateLabel_->setText("WIN TO TERMINATE THIS CONNECTION");
    detailLabel_->setText("Reveal all 54 safe cells. Ten mines stand between you and victory.");
    primary_->setText("Challenge active"); primary_->setEnabled(false);
    render();
}
void ChallengeDialog::reveal(int index) {
    if (pending_ || blocked_) return;
    const bool ready = board_.state() == Board::State::Ready;
    if (!board_.reveal(index)) return;
    if (ready) { elapsed_.start(); clock_.start(); }
    render();
    if (board_.state() == Board::State::Lost) {
        clock_.stop(); stateLabel_->setText("MINE HIT · CONNECTION SURVIVES");
        detailLabel_->setText("No firewall changes were made. Start a new board to try again.");
        primary_->setText("Challenge lost");
    } else if (board_.state() == Board::State::Won) { clock_.stop(); contain(); }
}
void ChallengeDialog::contain() {
    if (board_.state() != Board::State::Won || pending_ || blocked_) return;
    if (client_->busy()) { detailLabel_->setText("Another firewall action is in progress. Retry when it finishes."); primary_->setText("Retry containment"); primary_->setEnabled(true); return; }
    pending_ = true; restart_->setEnabled(false); primary_->setEnabled(false);
    primary_->setText("Applying block…"); stateLabel_->setText("BOARD CLEARED · AUTHORIZING CONTAINMENT");
    detailLabel_->setText(client_->simulation() ? "Applying a simulated block…" : "Authorize the separate firewall helper to contain this IP pair.");
    client_->request("block", source_, destination_);
}
void ChallengeDialog::render() {
    const bool lost = board_.state() == Board::State::Lost;
    for (int i = 0; i < Board::size; ++i) {
        const auto &c = board_.cell(i);
        auto *button = cells_[i];
        const bool mine = lost && c.mine;
        button->setProperty("open", c.open);
        button->setProperty("flag", c.flag);
        button->setProperty("mine", mine);
        button->setText(mine ? "✹" : lost && c.flag ? "×" : c.flag ? "⚑" : c.open && c.adjacent ? QString::number(c.adjacent) : "");
        button->setStyleSheet("");
        button->setAccessibleName(QString("Row %1 column %2, %3").arg(i / Board::side + 1).arg(i % Board::side + 1)
            .arg(mine ? "mine" : c.flag ? "flagged" : c.open ? QString::number(c.adjacent) + " adjacent mines" : "hidden"));
        button->style()->unpolish(button); button->style()->polish(button);
    }
    mineLabel_->setText(QString("Flags: %1 / %2").arg(board_.flags()).arg(Board::mines));
}
void ChallengeDialog::reject() {
    if (pending_) return;
    // Closing never silently removes a block; the Security menu remains the recovery path.
    QDialog::reject();
}

BlocksDialog::BlocksDialog(FirewallClient *client, QWidget *parent) : QDialog(parent), client_(client) {
    setWindowTitle("Mineshark · Active Blocks"); setObjectName("minesharkBlocks");
    setStyleSheet(mineshark::styleSheet()); resize(740, 430);
    auto *layout = new QVBoxLayout(this); layout->setContentsMargins(28, 24, 28, 24); layout->setSpacing(16);
    layout->addWidget(label("MINESHARK  /  CONTAINMENT & RECOVERY", "eyebrow"));
    layout->addWidget(label("Active Blocks", "title"));
    layout->addWidget(label(client_->simulation() ? "SIMULATION · no real traffic is blocked." : "Live nftables state · blocks expire after one hour, even if Wireshark closes.", "subtle"));
    table_ = new QTableWidget(0, 3); table_->setObjectName("activeBlocks");
    table_->setHorizontalHeaderLabels({"Endpoint A", "Endpoint B", "Expires in"});
    table_->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    table_->verticalHeader()->hide(); table_->setSelectionBehavior(QAbstractItemView::SelectRows);
    table_->setSelectionMode(QAbstractItemView::SingleSelection); table_->setEditTriggers(QAbstractItemView::NoEditTriggers);
    table_->setAlternatingRowColors(true); layout->addWidget(table_);
    status_ = label("Loading firewall state…", "subtle"); status_->setWordWrap(true); layout->addWidget(status_);
    auto *actions = new QHBoxLayout;
    refresh_ = new QPushButton("Refresh"); unblock_ = new QPushButton("Unblock selected"); all_ = new QPushButton("UNBLOCK ALL");
    unblock_->setObjectName("primary");
    actions->addWidget(refresh_); actions->addStretch(); actions->addWidget(all_); actions->addWidget(unblock_); layout->addLayout(actions);
    connect(refresh_, &QPushButton::clicked, this, [this] { request("status"); });
    connect(unblock_, &QPushButton::clicked, this, [this] { request("unblock"); });
    connect(all_, &QPushButton::clicked, this, [this] { request("unblock-all"); });
    connect(table_, &QTableWidget::itemSelectionChanged, this, &BlocksDialog::updateButtons);
    connect(client_, &FirewallClient::completed, this, [this](const QString &command, bool success, const QString &error, const QJsonArray &blocks) {
        if (!success) status_->setText(error);
        else if (command == "status") { populate(blocks); status_->setText(QString("%1 active IP pair(s) · last refreshed %2").arg(blocks.size()).arg(QTime::currentTime().toString("HH:mm:ss"))); }
        else { request("status"); return; }
        updateButtons();
    });
    QTimer::singleShot(0, this, [this] { request("status"); });
}
void BlocksDialog::request(const QString &command) {
    if (client_->busy()) { status_->setText("A firewall action is already in progress."); return; }
    QString a, b;
    if (command == "unblock") {
        const int row = table_->currentRow(); if (row < 0) return;
        a = table_->item(row, 0)->text(); b = table_->item(row, 1)->text();
    }
    status_->setText(command == "status" ? "Reading firewall state…" : "Restoring connection(s)…");
    client_->request(command, a, b); updateButtons();
}
void BlocksDialog::populate(const QJsonArray &blocks) {
    table_->setRowCount(blocks.size());
    for (int i = 0; i < blocks.size(); ++i) {
        const auto obj = blocks[i].toObject();
        table_->setItem(i, 0, new QTableWidgetItem(obj.value("source").toString()));
        table_->setItem(i, 1, new QTableWidgetItem(obj.value("destination").toString()));
        table_->setItem(i, 2, new QTableWidgetItem(QString("%1 min").arg((obj.value("expiresSeconds").toInt() + 59) / 60)));
    }
}
void BlocksDialog::updateButtons() {
    refresh_->setEnabled(!client_->busy());
    all_->setEnabled(!client_->busy() && table_->rowCount() > 0);
    unblock_->setEnabled(!client_->busy() && table_->currentRow() >= 0);
}
}
