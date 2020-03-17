#ifndef BOATSETUPMANAGER_HPP
#define BOATSETUPMANAGER_HPP

#include <Constants.hpp>
#include <QTableWidget>

#include <iostream>
#include <memory>

namespace Ui {
class Widget;
}

class BoatSetUpManager
{
public:
    BoatSetUpManager(std::shared_ptr<Ui::Widget> Ui);

    bool setUpBoat(const int x, const int y, const int size, const Constants::Direction direction = Constants::HORIZONTAL);

    int** getField();
private:
    bool isMayBoatSetUp(const int x, const int y, const int size, const Constants::Direction direction = Constants::HORIZONTAL);

private:
    std::shared_ptr<Ui::Widget> m_parentUi;
};

#endif // BOATSetUpMANAGER_HPP
