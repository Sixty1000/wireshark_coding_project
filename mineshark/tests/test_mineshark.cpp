// SPDX-License-Identifier: GPL-2.0-or-later
#include "board.h"
#include "mineshark_dialog.h"
#include "firewall_plan.h"
#include <QJsonObject>
#include <QDir>
#include <QLabel>
#include <QPushButton>
#include <QSignalSpy>
#include <QTableWidget>
#include <QTest>

class MinesharkTests : public QObject {
    Q_OBJECT
private slots:
    void localChallengeUnlocksOnlyOnWin() {
        mineshark::ChallengeDialog dialog({}, {}, nullptr);
        QSignalSpy unlocked(&dialog, &mineshark::ChallengeDialog::packetsUnlocked);
        dialog.board_ = mineshark::Board(42);
        dialog.reveal(0);
        for (int i = 0; i < mineshark::Board::size; ++i)
            if (dialog.board_.cell(i).mine) { dialog.reveal(i); break; }
        QCOMPARE(unlocked.count(), 0);
        QVERIFY(dialog.stateLabel_->text().contains("STILL LOCKED"));
        dialog.reset();
        dialog.reveal(0);
        for (int i = 0; i < mineshark::Board::size; ++i)
            if (!dialog.board_.cell(i).mine) dialog.reveal(i);
        QCOMPARE(unlocked.count(), 1);
        QVERIFY(dialog.stateLabel_->text().contains("UNLOCKED"));
        dialog.contain();
        QCOMPARE(unlocked.count(), 1);
    }
    void playingTimer() {
        mineshark::ChallengeDialog dialog({}, {}, nullptr);
        QCOMPARE(dialog.timeLabel_->text(), QString("Time: 00:00"));
        QVERIFY(!dialog.clock_.isActive());
        dialog.board_ = mineshark::Board(42);
        dialog.reveal(0);
        QVERIFY(dialog.clock_.isActive());
        QTRY_VERIFY_WITH_TIMEOUT(dialog.timeLabel_->text() != "Time: 00:00", 2500);
        for (int i = 0; i < mineshark::Board::size; ++i)
            if (dialog.board_.cell(i).mine) { dialog.reveal(i); break; }
        QVERIFY(!dialog.clock_.isActive());
        dialog.reset();
        QCOMPARE(dialog.timeLabel_->text(), QString("Time: 00:00"));
        QVERIFY(!dialog.clock_.isActive());
        dialog.reveal(0);
        for (int i = 0; i < mineshark::Board::size; ++i)
            if (!dialog.board_.cell(i).mine) dialog.reveal(i);
        QVERIFY(!dialog.clock_.isActive());
    }
    void firstClickSafe() {
        for (uint32_t seed = 0; seed < 100; ++seed)
            for (int first = 0; first < mineshark::Board::size; ++first) {
                mineshark::Board b(seed); QVERIFY(b.reveal(first));
                QVERIFY(!b.cell(first).mine); QCOMPARE(b.cell(first).adjacent, 0);
                int mines = 0;
                for (int i = 0; i < b.size; ++i) mines += b.cell(i).mine;
                QCOMPARE(mines, 10);
            }
    }
    void lossDisplaysExactlyTenMines() {
        mineshark::FirewallClient client(true);
        mineshark::ChallengeDialog dialog("10.0.2.15", "10.0.2.4", &client);
        dialog.board_ = mineshark::Board(42);
        dialog.board_.reveal(0);
        int trigger = -1;
        for (int i = 0; i < mineshark::Board::size; ++i) {
            const auto &cell = dialog.board_.cell(i);
            if (cell.mine) trigger = i;
            else if (!cell.open) dialog.board_.toggleFlag(i);
        }
        QVERIFY(trigger >= 0);
        dialog.board_.reveal(trigger);
        dialog.render();
        int visibleMines = 0;
        for (auto *button : dialog.cells_) visibleMines += button->text() == "✹";
        QCOMPARE(visibleMines, mineshark::Board::mines);
        for (int i = 0; i < mineshark::Board::size; ++i)
            if (dialog.board_.cell(i).flag && !dialog.board_.cell(i).mine)
                QCOMPARE(dialog.cells_[i]->text(), QString("×"));
    }
    void flagsAndBounds() {
        mineshark::Board b(42);
        QVERIFY(!b.reveal(-1)); QVERIFY(!b.reveal(64)); QVERIFY(!b.toggleFlag(64));
        for (int i = 0; i < 10; ++i) QVERIFY(b.toggleFlag(i));
        QVERIFY(!b.toggleFlag(10)); QCOMPARE(b.flags(), 10);
        QVERIFY(!b.reveal(0)); QCOMPARE(b.state(), mineshark::Board::State::Ready);
        QVERIFY(b.toggleFlag(0)); QVERIFY(b.reveal(0));
        QVERIFY(!b.toggleFlag(0));
    }
    void lossAndWin() {
        mineshark::Board lost(42); lost.reveal(0);
        for (int i = 0; i < lost.size; ++i) if (lost.cell(i).mine) { lost.reveal(i); break; }
        QCOMPARE(lost.state(), mineshark::Board::State::Lost);
        QVERIFY(!lost.reveal(63)); QVERIFY(!lost.toggleFlag(63));
        mineshark::Board won(42); won.reveal(0);
        for (int i = 0; i < won.size; ++i) if (!won.cell(i).mine) won.reveal(i);
        QCOMPARE(won.state(), mineshark::Board::State::Won); QCOMPARE(won.opened(), 54);
        QVERIFY(!won.toggleFlag(63));
    }
    void canonicalFirewall() {
        const auto a = mineshark::Pair::parse("10.0.2.15", "10.0.2.4");
        const auto b = mineshark::Pair::parse("10.0.2.4", "10.0.2.15");
        QCOMPARE(a.table(), b.table()); QVERIFY(mineshark::ownedTableName(a.table()));
        const QString script = a.script();
        QVERIFY(script.contains("10.0.2.15 . 10.0.2.4")); QVERIFY(script.contains("10.0.2.4 . 10.0.2.15"));
        for (const auto &hook : {"input", "output", "forward"}) QVERIFY(script.contains(QString("hook ") + hook));
        QVERIFY(script.contains("timeout 1h")); QVERIFY(!script.contains("flush ruleset"));
        const auto v6 = mineshark::Pair::parse("2001:db8::1", "2001:db8::2");
        QVERIFY(v6.script().contains("ip6 saddr . ip6 daddr"));
        QVERIFY_EXCEPTION_THROWN(mineshark::Pair::parse("1.1.1.1; flush ruleset", "1.1.1.2"), std::runtime_error);
        QVERIFY_EXCEPTION_THROWN(mineshark::Pair::parse("1.1.1.1", "1.1.1.1"), std::runtime_error);
        QVERIFY_EXCEPTION_THROWN(mineshark::Pair::parse("224.0.0.1", "1.1.1.1"), std::runtime_error);
        QVERIFY_EXCEPTION_THROWN(mineshark::Pair::parse("2001:db8::1", "1.1.1.1"), std::runtime_error);
        QVERIFY_EXCEPTION_THROWN(mineshark::Pair::parse("fe80::1%eth0", "fe80::2%eth0"), std::runtime_error);
    }
    void containmentRecovery() {
        mineshark::FirewallClient client(true); QSignalSpy spy(&client, &mineshark::FirewallClient::completed);
        client.request("block", "10.0.2.15", "10.0.2.4"); QVERIFY(spy.wait());
        QVERIFY(spy.last()[1].toBool()); QCOMPARE(qvariant_cast<QJsonArray>(spy.last()[3]).size(), 1);
        client.request("block", "10.0.2.4", "10.0.2.15"); QVERIFY(spy.wait());
        QCOMPARE(qvariant_cast<QJsonArray>(spy.last()[3]).size(), 1);
        client.request("unblock", "10.0.2.15", "10.0.2.4"); QVERIFY(spy.wait());
        QCOMPARE(qvariant_cast<QJsonArray>(spy.last()[3]).size(), 0);
        client.request("block", "192.168.1.20", "192.168.1.5"); QVERIFY(spy.wait());
        client.request("unblock-all"); QVERIFY(spy.wait());
        QCOMPARE(qvariant_cast<QJsonArray>(spy.last()[3]).size(), 0);
    }
    void closingChallengeDoesNotBlock() {
        mineshark::FirewallClient client(true); QSignalSpy spy(&client, &mineshark::FirewallClient::completed);
        { mineshark::ChallengeDialog dialog("10.0.2.15", "10.0.2.4", &client); dialog.show();
          auto cells = dialog.findChildren<QPushButton *>("cell"); QCOMPARE(cells.size(), 64);
          QTest::mouseClick(cells[0], Qt::LeftButton); dialog.close(); }
        QCOMPARE(spy.size(), 0);
    }
    void victoryTriggersBlockThenRestore() {
        mineshark::FirewallClient client(true); QSignalSpy spy(&client, &mineshark::FirewallClient::completed);
        mineshark::ChallengeDialog dialog("10.0.2.15", "10.0.2.4", &client);
        dialog.show();
        if (!qEnvironmentVariable("MINESHARK_QA_DIR").isEmpty()) {
            QDir().mkpath(qEnvironmentVariable("MINESHARK_QA_DIR"));
            dialog.grab().save(qEnvironmentVariable("MINESHARK_QA_DIR") + "/challenge.png");
        }
        QTest::mouseClick(dialog.cells_[0], Qt::LeftButton);
        for (int i = 0; i < mineshark::Board::size; ++i)
            if (!dialog.board_.cell(i).mine && !dialog.board_.cell(i).open)
                QTest::mouseClick(dialog.cells_[i], Qt::LeftButton);
        QCOMPARE(dialog.board_.state(), mineshark::Board::State::Won);
        QVERIFY(spy.wait()); QCOMPARE(spy.last()[0].toString(), QString("block"));
        QVERIFY(dialog.blocked_); QVERIFY(dialog.stateLabel_->text().contains("SIMULATED"));
        QCOMPARE(dialog.primary_->text(), QString("Restore Connection"));
        if (!qEnvironmentVariable("MINESHARK_QA_DIR").isEmpty())
            QCoreApplication::processEvents();
        if (!qEnvironmentVariable("MINESHARK_QA_DIR").isEmpty())
            dialog.grab().save(qEnvironmentVariable("MINESHARK_QA_DIR") + "/victory.png");
        QTest::mouseClick(dialog.primary_, Qt::LeftButton);
        QVERIFY(spy.wait()); QCOMPARE(spy.last()[0].toString(), QString("unblock"));
        QVERIFY(!dialog.blocked_); QCOMPARE(dialog.stateLabel_->text(), QString("CONNECTION RESTORED"));
    }
    void lossDoesNotCallFirewall() {
        mineshark::FirewallClient client(true); QSignalSpy spy(&client, &mineshark::FirewallClient::completed);
        mineshark::ChallengeDialog dialog("10.0.2.15", "10.0.2.4", &client);
        QTest::mouseClick(dialog.cells_[0], Qt::LeftButton);
        for (int i = 0; i < mineshark::Board::size; ++i)
            if (dialog.board_.cell(i).mine) { QTest::mouseClick(dialog.cells_[i], Qt::LeftButton); break; }
        QCOMPARE(dialog.board_.state(), mineshark::Board::State::Lost);
        QCOMPARE(spy.size(), 0); QVERIFY(!dialog.blocked_);
    }
    void recoveryManagerLoadsAndUnblocks() {
        mineshark::FirewallClient client(true); QSignalSpy spy(&client, &mineshark::FirewallClient::completed);
        client.request("block", "10.0.2.15", "10.0.2.4"); QVERIFY(spy.wait());
        mineshark::BlocksDialog manager(&client); manager.show();
        QVERIFY(spy.wait());
        auto *table = manager.findChild<QTableWidget *>("activeBlocks");
        QVERIFY(table); QCOMPARE(table->rowCount(), 1);
        table->selectRow(0);
        QPushButton *unblock = nullptr;
        for (auto *button : manager.findChildren<QPushButton *>())
            if (button->text() == "Unblock selected") unblock = button;
        QVERIFY(unblock); QVERIFY(unblock->isEnabled());
        if (!qEnvironmentVariable("MINESHARK_QA_DIR").isEmpty()) {
            QCoreApplication::processEvents();
            manager.grab().save(qEnvironmentVariable("MINESHARK_QA_DIR") + "/blocks.png");
        }
        QTest::mouseClick(unblock, Qt::LeftButton);
        QTRY_COMPARE_WITH_TIMEOUT(table->rowCount(), 0, 2000);
    }
};
QTEST_MAIN(MinesharkTests)
#include "test_mineshark.moc"
