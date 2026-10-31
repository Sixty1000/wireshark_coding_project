// SPDX-License-Identifier: GPL-2.0-or-later
#include "mineshark_dialog.h"
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QScrollArea>
#include <QVBoxLayout>
#include <random>

namespace mineshark {
static uint32_t seed() { return std::random_device{}(); }
ChallengeDialog::ChallengeDialog(QWidget *parent) : QWidget(parent), board_(seed()) {
    setObjectName("minesharkChallenge");
    auto *outer = new QVBoxLayout(this);
    auto *scroll = new QScrollArea;
    scroll->setWidgetResizable(true);
    auto *body = new QWidget;
    scroll->setWidget(body);
    outer->addWidget(scroll);
    auto *layout = new QVBoxLayout(body);
    auto *heading = new QHBoxLayout;
    auto *title = new QLabel("Minesweeper");
    title->setStyleSheet("font-weight: bold; font-size: 20px;");
    heading->addWidget(title);
    heading->addStretch();
    timeLabel_ = new QLabel("Time: 00:00");
    timeLabel_->setObjectName("elapsedTime");
    timeLabel_->setAccessibleName("Elapsed playing time");
    heading->addWidget(timeLabel_);
    layout->addLayout(heading);
    auto *description = new QLabel("Win Minesweeper to start recording live packets or view a saved capture.");
    description->setWordWrap(true);
    layout->addWidget(description);
    auto *metrics = new QHBoxLayout;
    metrics->addWidget(new QLabel("BEGINNER  ·  8 × 8"));
    metrics->addStretch();
    mineLabel_ = new QLabel;
    metrics->addWidget(mineLabel_);
    layout->addLayout(metrics);
    auto *grid = new QGridLayout;
    grid->setSpacing(1);
    for (int i = 0; i < Board::size; ++i) {
        auto *cell = new QPushButton;
        cells_[i] = cell;
        cell->setObjectName("cell");
        cell->setFixedSize(32, 32);
        cell->setContextMenuPolicy(Qt::CustomContextMenu);
        connect(cell, &QPushButton::clicked, this, [this, i] { reveal(i); });
        connect(cell, &QPushButton::customContextMenuRequested, this, [this, i] {
            board_.toggleFlag(i); render();
        });
        grid->addWidget(cell, i / Board::side, i % Board::side);
    }
    layout->addLayout(grid);
    layout->setAlignment(grid, Qt::AlignHCenter);
    auto *instructions = new QLabel("Left click to reveal · Right click to flag · First click is safe");
    instructions->setWordWrap(true);
    layout->addWidget(instructions);
    stateLabel_ = new QLabel;
    stateLabel_->setWordWrap(true);
    layout->addWidget(stateLabel_);
    restart_ = new QPushButton("New board");
    restart_->setObjectName("newBoard");
    connect(restart_, &QPushButton::clicked, this, &ChallengeDialog::reset);
    layout->addWidget(restart_);
    layout->addStretch();
    clock_.setInterval(200);
    connect(&clock_, &QTimer::timeout, this, &ChallengeDialog::updateTime);
    reset();
}
void ChallengeDialog::updateTime() {
    const qint64 seconds = elapsed_.isValid() ? elapsed_.elapsed() / 1000 : 0;
    timeLabel_->setText(QString("Time: %1:%2").arg(seconds / 60, 2, 10, QChar('0')).arg(seconds % 60, 2, 10, QChar('0')));
}
void ChallengeDialog::reset() {
    clock_.stop();
    elapsed_.invalidate();
    board_ = Board(seed());
    updateTime();
    stateLabel_->setText("WIN TO UNLOCK CAPTURE · Reveal all 54 safe cells. Ten mines stand between you and victory.");
    restart_->setEnabled(true);
    render();
}
void ChallengeDialog::reveal(int index) {
    const bool ready = board_.state() == Board::State::Ready;
    if (!board_.reveal(index)) return;
    if (ready) { elapsed_.start(); clock_.start(); }
    render();
    if (board_.state() == Board::State::Lost || board_.state() == Board::State::Won) {
        clock_.stop();
        updateTime();
        if (board_.state() == Board::State::Lost) {
            stateLabel_->setText("MINE HIT · CAPTURE STILL LOCKED. Start a new board to try again.");
        } else {
            stateLabel_->setText("VICTORY · PACKETS UNLOCKED");
            restart_->setEnabled(false);
            emit packetsUnlocked();
        }
    }
}
void ChallengeDialog::render() {
    const bool lost = board_.state() == Board::State::Lost;
    for (int i = 0; i < Board::size; ++i) {
        const auto &c = board_.cell(i);
        const bool mine = lost && c.mine;
        auto *button = cells_[i];
        button->setText(mine ? "✹" : lost && c.flag ? "×" : c.flag ? "⚑" : c.open && c.adjacent ? QString::number(c.adjacent) : "");
        button->setStyleSheet(mine ? "background: #ffb0b0; color: black;" : c.open ? "border: 1px solid palette(mid); background: palette(base);" : "");
        button->setAccessibleName(QString("Row %1 column %2, %3").arg(i / Board::side + 1).arg(i % Board::side + 1)
            .arg(mine ? "mine" : c.flag ? "flagged" : c.open ? QString::number(c.adjacent) + " adjacent mines" : "hidden"));
    }
    mineLabel_->setText(QString("Flags: %1 / %2").arg(board_.flags()).arg(Board::mines));
}
}
