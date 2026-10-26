// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once
#include "board.h"
#include <QDialog>
#include <QElapsedTimer>
#include <QJsonArray>
#include <QObject>
#include <QProcess>
#include <QTimer>
#include <array>
class QLabel;
class QPushButton;
class QTableWidget;
class QScrollArea;
class MinesharkTests;

namespace mineshark {
class FirewallClient : public QObject {
    Q_OBJECT
public:
    explicit FirewallClient(bool simulation, QObject *parent = nullptr);
    bool simulation() const { return simulation_; }
    bool busy() const { return process_.state() != QProcess::NotRunning || pending_; }
    void request(const QString &command, const QString &a = {}, const QString &b = {});
signals:
    void completed(QString command, bool success, QString error, QJsonArray blocks);
private:
    bool simulation_, pending_ = false;
    QProcess process_;
    QString command_;
    QJsonArray simulated_;
    void finish(bool success, const QString &error = {}, const QJsonArray &blocks = {});
};

class ChallengeDialog : public QDialog {
    Q_OBJECT
    friend class ::MinesharkTests;
public:
    ChallengeDialog(const QString &source, const QString &destination, FirewallClient *client, QWidget *parent = nullptr);
signals:
    void packetsUnlocked();
protected:
    void reject() override;
private:
    QString source_, destination_;
    FirewallClient *client_;
    Board board_;
    QElapsedTimer elapsed_;
    QTimer clock_;
    std::array<QPushButton *, Board::size> cells_{};
    QLabel *stateLabel_, *detailLabel_, *mineLabel_, *timeLabel_;
    QPushButton *primary_, *restart_;
    QScrollArea *scroll_;
    bool blocked_ = false, pending_ = false;
    void reset();
    void reveal(int index);
    void render();
    void contain();
};

class BlocksDialog : public QDialog {
    Q_OBJECT
public:
    explicit BlocksDialog(FirewallClient *client, QWidget *parent = nullptr);
private:
    FirewallClient *client_;
    QTableWidget *table_;
    QLabel *status_;
    QPushButton *refresh_, *unblock_, *all_;
    void request(const QString &command);
    void populate(const QJsonArray &blocks);
    void updateButtons();
};
QString styleSheet();
}
