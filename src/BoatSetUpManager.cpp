#include "BoatSetUpManager.hpp"

#include "ui_Widget.h"

BoatSetUpManager::BoatSetUpManager(std::shared_ptr<Ui::Widget> Ui)
    : m_parentUi{Ui}
{
}

bool BoatSetUpManager::setUpBoat(
        const int x,
        const int y,
        const int size,
        const Constants::Direction direction)
{
    if (isMayBoatSetUp(x, y, size, direction)) {
        int maxX = x;
        int maxY = y;

        if (Constants::Direction::HORIZONTAL == direction) {
            maxY += (size - 1);
        } else {
            maxX += (size - 1);
        }

        for (int i = x; i <= maxX; i++) {
            for (int j = y; j <= maxY; j++) {
                QTableWidgetItem* item = new QTableWidgetItem("");
                item->setBackground(QPixmap(":/boats/images/Boat1"));
                m_parentUi->FieldSetUpTable->setItem(i, j, item);
            }
        }
        return true;
    }
    return false;
}

bool BoatSetUpManager::isMayBoatSetUp(
        const int x,
        const int y,
        const int size,
        const Constants::Direction direction)
{
    int startX = x - 1;
    int startY = y - 1;

    int endX = x + 1;
    int endY = y + 1;
    if (Constants::Direction::HORIZONTAL == direction) {
        endY += (size - 1);
        if (10 < endY) {
            return false;
        }
    } else {
        endX += (size - 1);
        if (10 < endX) {
            return false;
        }
    }

    for (int i = startX; i <= endX; i++) {
        for (int j = startY; j <= endY; j++) {
            if (nullptr != m_parentUi->FieldSetUpTable->item(i, j) && i < 10 && j < 10) {
                return false;
            }
        }
    }
    return true;
}
