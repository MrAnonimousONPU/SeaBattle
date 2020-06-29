#ifndef _SEA_BATTLE_COMMON_FEATHURES_UIBOATSETUPMANAGER_HPP
#define _SEA_BATTLE_COMMON_FEATHURES_UIBOATSETUPMANAGER_HPP

#include <common/interfaces/IBoatSetUpManager.hpp>
#include <common/structs/Field.hpp>

#include <QWidget>

#include <memory>

class QTableWidget;

namespace UI {

class UIBoatSetUpManager : public QObject {
public:

    UIBoatSetUpManager(
        std::shared_ptr<QTableWidget> qTable,
        std::shared_ptr<QWidget> qWidget,
        std::shared_ptr<::Interfaces::IBoatSetUpManager> boatSetUpManager
    );

public slots:

    void onChoseBoat(const int button);
    void onRotateBoat();
    void onClearField();
    void onFieldCellClicked(const int row, const int column);
    void onReady();

private:

    void onDrawFieldRequest(const ::Structs::Field& field);

private:

    std::shared_ptr<QTableWidget> m_qTable;
    std::shared_ptr<QWidget> m_qWidget;
    std::shared_ptr<::Interfaces::IBoatSetUpManager> m_boatSetUpManager;
};
}

#endif //_SEA_BATTLE_COMMON_FEATHURES_UIBOATSETUPMANAGER_HPP