#ifndef _SEA_BATTLE_COMMON_CONSTANTS_QTUI_CURSORS_HPP
#define _SEA_BATTLE_COMMON_CONSTANTS_QTUI_CURSORS_HPP

#include <common/structs/Boat.hpp>

#include <QCursor>

namespace Cursors {

struct Cursor
{
    enum type {
        Boat1,
        Boat2,
        Boat3,
        Boat4,
        VerticalBoat1,
        VerticalBoat2,
        VerticalBoat3,
        VerticalBoat4
    };
};

const int8_t BOATS = 4;
const int8_t VERTICAL_BOATS = 4;

::QCursor& getCursor(const Cursor::type& cursor);

::Structs::Boat cursorToBoat(const ::QCursor& cursor);

}

#endif //_SEA_BATTLE_COMMON_CONSTANTS_QTUI_CURSORS_HPP