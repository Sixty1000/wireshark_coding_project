// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once
#include <array>
#include <cstdint>

namespace mineshark {
class Board {
public:
    static constexpr int side = 8, mines = 10, size = side * side;
    struct Cell { bool mine = false, open = false, flag = false; int adjacent = 0; };
    enum class State { Ready, Playing, Won, Lost };
    explicit Board(uint32_t seed);
    bool reveal(int index);
    bool toggleFlag(int index);
    const Cell &cell(int index) const { return cells_.at(index); }
    State state() const { return state_; }
    int flags() const;
    int opened() const;
private:
    std::array<Cell, size> cells_{};
    uint32_t seed_;
    State state_ = State::Ready;
    void plant(int safe);
    void flood(int index);
};
}
