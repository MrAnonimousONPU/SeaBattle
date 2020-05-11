#ifndef _SEA_BATTLE_COMMON_CONSTANTS_QTUI_PIXMAPCHACHEKEY_HPP
#define _SEA_BATTLE_COMMON_CONSTANTS_QTUI_PIXMAPCHACHEKEY_HPP

#include <QPixmap>

namespace Pixmaps {

const QPixmap Boat1 = QPixmap(":/boats/images/Boat1");
const QPixmap Boat2 = QPixmap(":/boats/images/Boat2");
const QPixmap Boat3 = QPixmap(":/boats/images/Boat3");
const QPixmap Boat4 = QPixmap(":/boats/images/Boat4");

const QPixmap VerticalBoat1 = Boat1;
const QPixmap VerticalBoat2 = QPixmap(":/boats/images/VBoat2");
const QPixmap VerticalBoat3 = QPixmap(":/boats/images/VBoat3");
const QPixmap VerticalBoat4 = QPixmap(":/boats/images/VBoat4");

const QPixmap DeadBoat = QPixmap(":/boats/images/DeadBoat");
}

namespace CacheKeys {

const qint64 Boat1 = ::Pixmaps::Boat1.cacheKey();
const qint64 Boat2 = ::Pixmaps::Boat2.cacheKey();
const qint64 Boat3 = ::Pixmaps::Boat3.cacheKey();
const qint64 Boat4 = ::Pixmaps::Boat4.cacheKey();

const qint64 VerticalBoat1 = Boat1;
const qint64 VerticalBoat2 = ::Pixmaps::VerticalBoat2.cacheKey();
const qint64 VerticalBoat3 = ::Pixmaps::VerticalBoat3.cacheKey();
const qint64 VerticalBoat4 = ::Pixmaps::VerticalBoat4.cacheKey();

const qint64 DeadBoat = ::Pixmaps::DeadBoat.cacheKey();
}

#endif //_SEA_BATTLE_COMMON_CONSTANTS_QTUI_PIXMAPCHACHEKEY_HPP