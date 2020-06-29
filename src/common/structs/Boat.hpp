#ifndef _SEA_BATTLE_COMMON_STRUCTS_BOAT_HPP
#define _SEA_BATTLE_COMMON_STRUCTS_BOAT_HPP

#include <common/structs/Point.hpp>
#include <common/constants/Direction.hpp>

namespace Structs {

struct Boat {
    Boat() = default;
    Boat(int8_t _lenght, ::Structs::Point _startPoint, ::Enum::Direction::type _direction);

    int8_t length;
    ::Structs::Point startPoint;
    ::Enum::Direction::type direction;
};
}

#endif //_SEA_BATTLE_COMMON_STRUCTS_BOAT_HPP