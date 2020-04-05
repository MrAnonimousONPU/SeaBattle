#ifndef _SEA_BATTLE_FEATHUERS_UI_CLIENT_MOCK_MOCKPLAYGAMEMANAGER_HPP
#define _SEA_BATTLE_FEATHUERS_UI_CLIENT_MOCK_MOCKPLAYGAMEMANAGER_HPP

#include <common/interfaces/IPlayGameManager.hpp>

#include <gmock/gmock.h>



namespace MockUiClient {

class MockBoatSetUpManager : Interfaces::IPlayGameManager {

    MOCK_METHOD1(::Enum::ErrorMessage, shoot, (::Structs::Point&));
  	MOCK_METHOD0(void, onReceivedShootResult, ());
  	MOCK_METHOD0(::Structs::Field&, getEnemyField, ());

  	MOCK_METHOD0(void, onEnemyHit, ());
  	MOCK_METHOD0(::Structs::Field&, getAlliedField, ());
};
}

#endif //_SEA_BATTLE_FEATHUERS_UI_CLIENT_MOCK_MOCKPLAYGAMEMANAGER_HPP