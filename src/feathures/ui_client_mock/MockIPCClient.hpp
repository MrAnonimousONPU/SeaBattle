#ifndef _SEA_BATTLE_FEATHUERS_UI_CLIENT_MOCK_MOCKIPCCLIENT_HPP
#define _SEA_BATTLE_FEATHUERS_UI_CLIENT_MOCK_MOCKIPCCLIENT_HPP

#include <common/interfaces/IIPCClient.hpp>

#include <gmock/gmock.h>



namespace MockUiClient {

class MockBoatSetUpManager : Interfaces::IIPCClient {

    MOCK_METHOD0(std::vector<std::string>&, getServerList, ());
  	MOCK_METHOD0(::Enum::ErrorMessage&, createServer, ());
  	MOCK_METHOD0(::Enum::ErrorMessage&, connectToServer, ());
};
}

#endif //_SEA_BATTLE_FEATHUERS_UI_CLIENT_MOCK_MOCKIPCCLIENT_HPP