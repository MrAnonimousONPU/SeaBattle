#ifndef _SEA_BATTLE_COMMON_INTERFACES_IIPCCLIENT_HPP
#define _SEA_BATTLE_COMMON_INTERFACES_IIPCCLIENT_HPP

#include <vector>
#include <string>
#include <common/constants/ErrorMessage.hpp>

namespace Interfaces {

struct IIPCClient {

    virtual ~IIPCClient() = default;

    virtual std::vector<std::string> getServerList() = 0;
    virtual ::Enum::ErrorMessage createServer() = 0;
    virtual ::Enum::ErrorMessage connectToServer() = 0;
};
}

#endif //_SEA_BATTLE_COMMON_INTERFACES_IIPCCLIENT_HPP