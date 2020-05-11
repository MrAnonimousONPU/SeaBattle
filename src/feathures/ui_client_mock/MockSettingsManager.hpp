#ifndef _SEA_BATTLE_FEATHUERS_UI_CLIENT_MOCK_MOCKSETTINGSMANAGER_HPP
#define _SEA_BATTLE_FEATHUERS_UI_CLIENT_MOCK_MOCKSETTINGSMANAGER_HPP

#include <common/interfaces/ISettingManager.hpp>

#include <gmock/gmock.h>



namespace MockUiClient {

class MockSettingManager : Interfaces::ISettingManager {

    MOCK_METHOD1(::Enum::ErrorMessage, saveNickName, (std::string));
  	MOCK_METHOD0(std::string&, getNickName, ());
  	MOCK_METHOD0(int32_t, getCountWins, ());
  	MOCK_METHOD0(int32_t, getCountLoses, ());
  	MOCK_METHOD0(double, getWinRate, ());
  	MOCK_METHOD0(::Enum::FieldOrientation, getFieldOrientation, ());
  	MOCK_METHOD1(::Enum::ErrorMessage, setFieldOrientation, (::Enum::FieldOrientation));
};
}

#endif //_SEA_BATTLE_FEATHUERS_UI_CLIENT_MOCK_MOCKSETTINGSMANAGER_HPP