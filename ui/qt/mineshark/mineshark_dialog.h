// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once
#include "board.h"
#include <QWidget>
#include <QElapsedTimer>
#include <QTimer>
#include <array>
class QLabel;
class QPushButton;
class MinesharkTests;
namespace mineshark {
class ChallengeDialog : public QWidget {
    Q_OBJECT
    friend class ::MinesharkTests;
public:
    explicit ChallengeDialog(QWidget *parent = nullptr);
signals:
    void packetsUnlocked();
private:
    Board board_;
    QElapsedTimer elapsed_;
    QTimer clock_;
    std::array<QPushButton *, Board::size> cells_{};
    QLabel *timeLabel_, *stateLabel_, *mineLabel_;
    QPushButton *restart_;
    void reset();
    void reveal(int index);
    void render();
    void updateTime();
};
}
