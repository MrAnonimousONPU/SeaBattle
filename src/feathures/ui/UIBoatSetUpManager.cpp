#include <feathures/ui/UIBoatSetUpManager.hpp>

#include <common/constants/QTUI/Cursors.hpp>
#include <common/constants/QTUI/PixmapCacheKey.hpp>

#include <QTableWidget>

UI::UIBoatSetUpManager::UIBoatSetUpManager(
    std::shared_ptr<QTableWidget> qTable,
    std::shared_ptr<QWidget> qWidget,
    std::shared_ptr<::Interfaces::IBoatSetUpManager> boatSetUpManager)
    : m_qTable(qTable)
    , m_qWidget(qWidget)
    , m_boatSetUpManager(boatSetUpManager)
{
    auto lDrawField = [this](const ::Structs::Field& field)
    {
        onDrawFieldRequest(field);
    };

    m_boatSetUpManager->subscribeToDrawField(lDrawField);
}

void UI::UIBoatSetUpManager::onChoseBoat(const int boat)
{
    if (::Cursors::BOATS <= boat) {
        m_qWidget->setCursor(::Cursors::getCursor(static_cast<::Cursors::Cursor::type>(boat)));
    }
}

void UI::UIBoatSetUpManager::onRotateBoat()
{
    const qint64 cacheKey = m_qWidget->cursor().pixmap().cacheKey();

    ::Cursors::Cursor::type cursorBoat = ::Cursors::Cursor::Boat1;

    if (::CacheKeys::Boat2 == cacheKey) {
        cursorBoat = ::Cursors::Cursor::VerticalBoat2;
    } else if (::CacheKeys::Boat3 == cacheKey) {
        cursorBoat = ::Cursors::Cursor::VerticalBoat3;
    } else if (::CacheKeys::Boat4 == cacheKey) {
        cursorBoat = ::Cursors::Cursor::VerticalBoat4;
    } else if (::CacheKeys::VerticalBoat2 == cacheKey) {
        cursorBoat = ::Cursors::Cursor::Boat2;
    } else if (::CacheKeys::VerticalBoat3 == cacheKey) {
        cursorBoat = ::Cursors::Cursor::Boat3;
    } else if (::CacheKeys::VerticalBoat4 == cacheKey) {
        cursorBoat = ::Cursors::Cursor::Boat4;
    }

    m_qWidget->setCursor(::Cursors::getCursor(cursorBoat));
}

void UI::UIBoatSetUpManager::onClearField()
{
    m_boatSetUpManager->clearField();
}

void UI::UIBoatSetUpManager::onFieldCellClicked(const int row, const int column)
{
    ::Structs::Boat boat = ::Cursors::cursorToBoat(m_qWidget->cursor());

    boat.startPoint = ::Structs::Point(column, row);

    m_boatSetUpManager->setUpBoat(boat);
}

void UI::UIBoatSetUpManager::onReady()
{
    m_boatSetUpManager->sendRedyToPlay();
}

void UI::UIBoatSetUpManager::onDrawFieldRequest(const ::Structs::Field& field)
{
    for (int i = 0; i < field.columns(); i++) {
        for (int j = 0; j < field.rows(); j++) {
            ::Enum::FieldState::type fieldState = field.getCellState({i, j});
            if (::Enum::FieldState::Miss == fieldState) {
                QTableWidgetItem* newitem = new QTableWidgetItem("");
                newitem->setBackground(::Pixmaps::Boat1);
                m_qTable->setItem(j, i, newitem);
            } else if (::Enum::FieldState::Hit == fieldState) {
                QTableWidgetItem* newitem = new QTableWidgetItem("");
                newitem->setBackground(::Pixmaps::DeadBoat);
                m_qTable->setItem(j, i, newitem);
            }
        }
    }
}