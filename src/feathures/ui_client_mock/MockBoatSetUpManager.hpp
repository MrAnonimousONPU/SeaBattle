#ifndef _SEA_BATTLE_FEATHUERS_UI_CLIENT_MOCK_MOCKBOATSETUPMANAGER_HPP
#define _SEA_BATTLE_FEATHUERS_UI_CLIENT_MOCK_MOCKBOATSETUPMANAGER_HPP

#include <common/interfaces/IBoatSetUpManager.hpp>

#include <gmock/gmock.h>



namespace MockUiClient {

class MockBoatSetUpManager : Interfaces::IBoatSetUpManager {

    MOCK_METHOD1(::Enum::ErrorMessage&, setUpBoat, (::Structs::Boat&));
  	MOCK_METHOD0(::Enum::ErrorMessage&, clearField, ());
  	MOCK_METHOD0(::Enum::ErrorMessage&, sendRedyToPlay, ());
};
}

#endif //_SEA_BATTLE_FEATHUERS_UI_CLIENT_MOCK_MOCKBOATSETUPMANAGER_HPP