// SPDX-License-Identifier: GPL-2.0-or-later
#include "board.h"
#include <algorithm>
#include <random>
#include <vector>
#include <cstdlib>

namespace mineshark {
constexpr int Board::side;
constexpr int Board::mines;
constexpr int Board::size;
Board::Board(uint32_t seed) : seed_(seed) {}
void Board::plant(int safe)
{
    std::vector<int> positions;
    for (int i = 0; i < size; ++i)
        if (std::abs(i / side - safe / side) > 1 || std::abs(i % side - safe % side) > 1)
            positions.push_back(i);
    std::mt19937 random(seed_);
    std::shuffle(positions.begin(), positions.end(), random);
    for (int i = 0; i < mines; ++i) cells_[positions[i]].mine = true;
    for (int i = 0; i < size; ++i)
        for (int j = 0; j < size; ++j)
            if (i != j && std::abs(i / side - j / side) <= 1 && std::abs(i % side - j % side) <= 1 && cells_[j].mine)
                ++cells_[i].adjacent;
}
void Board::flood(int index)
{
    auto &c = cells_[index];
    if (c.open || c.flag || c.mine) return;
    c.open = true;
    if (c.adjacent) return;
    for (int j = 0; j < size; ++j)
        if (std::abs(index / side - j / side) <= 1 && std::abs(index % side - j % side) <= 1)
            flood(j);
}
bool Board::reveal(int index)
{
    if (index < 0 || index >= size || state_ == State::Won || state_ == State::Lost || cells_[index].open || cells_[index].flag) return false;
    if (state_ == State::Ready) { plant(index); state_ = State::Playing; }
    if (cells_[index].mine) { cells_[index].open = true; state_ = State::Lost; return true; }
    flood(index);
    if (opened() == size - mines) state_ = State::Won;
    return true;
}
bool Board::toggleFlag(int index)
{
    if (index < 0 || index >= size || state_ == State::Won || state_ == State::Lost || cells_[index].open) return false;
    if (!cells_[index].flag && flags() >= mines) return false;
    cells_[index].flag = !cells_[index].flag;
    return true;
}
int Board::flags() const { return std::count_if(cells_.begin(), cells_.end(), [](const Cell &c) { return c.flag; }); }
int Board::opened() const { return std::count_if(cells_.begin(), cells_.end(), [](const Cell &c) { return c.open && !c.mine; }); }
}
