// SPDX-License-Identifier: GPL-2.0-or-later
#include "board.h"
#include "mineshark_dialog.h"
#include <QLabel>
#include <QPushButton>
#include <QSignalSpy>
#include <QTest>
class MinesharkTests : public QObject {
    Q_OBJECT
private slots:
    void localChallengeUnlocksOnlyOnWin() {
        mineshark::ChallengeDialog dialog;
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
        dialog.reveal(0);
        QCOMPARE(unlocked.count(), 1);
    }
    void playingTimer() {
        mineshark::ChallengeDialog dialog;
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
};
QTEST_MAIN(MinesharkTests)
#include "test_mineshark.moc"
