#ifndef CONSTANTS_HPP
#define CONSTANTS_HPP

#include <iostream>
namespace Constants {

enum Screen {
    MAIN_MENU = 0,
    SETTINGS_SCREEN = 1,
    GAMES_LIST = 2,
    GAME = 3
};

enum ShootResult {
    MISS = 0,
    HIT = 1,
    KILL = 2,
    Win = 3
};

enum Direction {
    VERTICAL = 0,
    HORIZONTAL = 1
};

constexpr uint8_t getGameFieldWidth() {
    return 10u;
}
constexpr uint8_t getGameFieldHight() {
    return 10u;
}
}
#endif // CONSTANTS_HPP