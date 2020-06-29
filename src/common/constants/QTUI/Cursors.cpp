#include <common/constants/QTUI/Cursors.hpp>

#include <common/constants/QTUI/PixmapCacheKey.hpp>

namespace {
    const int8_t BOAT_CELL_CENTER_X = 11;
    const int8_t BOAT_CELL_CENTER_Y = 11;

    static QCursor Boat1 = QCursor(QPixmap(":/boats/images/Boat1"), BOAT_CELL_CENTER_X, BOAT_CELL_CENTER_Y);
    static QCursor Boat2 = QCursor(QPixmap(":/boats/images/Boat2"), BOAT_CELL_CENTER_X, BOAT_CELL_CENTER_Y);
    static QCursor Boat3 = QCursor(QPixmap(":/boats/images/Boat3"), BOAT_CELL_CENTER_X, BOAT_CELL_CENTER_Y);
    static QCursor Boat4 = QCursor(QPixmap(":/boats/images/Boat4"), BOAT_CELL_CENTER_X, BOAT_CELL_CENTER_Y);

    static QCursor VerticalBoat2 = QCursor(QPixmap(":/boats/images/VBoat2"), BOAT_CELL_CENTER_X, BOAT_CELL_CENTER_Y);
    static QCursor VerticalBoat3 = QCursor(QPixmap(":/boats/images/VBoat3"), BOAT_CELL_CENTER_X, BOAT_CELL_CENTER_Y);
    static QCursor VerticalBoat4 = QCursor(QPixmap(":/boats/images/VBoat4"), BOAT_CELL_CENTER_X, BOAT_CELL_CENTER_Y);
}

namespace Cursors {

::QCursor& getCursor(const Cursor::type& cursor)
{
    switch (cursor)
    {
    case Cursor::Boat1:
        return Boat1;
        break;
    case Cursor::Boat2:
        return Boat2;
        break;
    case Cursor::Boat3:
        return Boat3;
        break;
    case Cursor::Boat4:
        return Boat4;
        break;
    case Cursor::VerticalBoat1:
        return Boat1;
        break;
    case Cursor::VerticalBoat2:
        return VerticalBoat2;
        break;
    case Cursor::VerticalBoat3:
        return VerticalBoat3;
        break;
    case Cursor::VerticalBoat4:
        return VerticalBoat4;
        break;
    default:
        std::__throw_invalid_argument("Invalid cursor");
        break;
    }
}

::Structs::Boat cursorToBoat(const ::QCursor& cursor)
{
    ::Structs::Boat retValue;

    const qint64 cacheKey = cursor.pixmap().cacheKey();

    switch (cacheKey)
    {
    case ::CacheKeys::Boat1:
        retValue = ::Structs::Boat(1, {}, ::Enum::Direction::HORIZONTAL);
        break;
    case ::CacheKeys::Boat2:
        retValue = ::Structs::Boat(2, {}, ::Enum::Direction::HORIZONTAL);
        break;
    case ::CacheKeys::Boat3:
        retValue = ::Structs::Boat(3, {}, ::Enum::Direction::HORIZONTAL);
        break;
    case ::CacheKeys::Boat4:
        retValue = ::Structs::Boat(4, {}, ::Enum::Direction::HORIZONTAL);
        break;
    case ::CacheKeys::VerticalBoat2:
        retValue = ::Structs::Boat(2, {}, ::Enum::Direction::VERTICAL);
        break;
    case ::CacheKeys::VerticalBoat3:
        retValue = ::Structs::Boat(3, {}, ::Enum::Direction::VERTICAL);;
        break;
    case ::CacheKeys::VerticalBoat4:
        retValue = ::Structs::Boat(4, {}, ::Enum::Direction::VERTICAL);
        break;
    default:
        std::__throw_invalid_argument("Invalid cursor");
        break;
    }

    return retValue;
}

}