#ifndef _SEA_BATTLE_COMMON_STRUCTS_UICLIENT_HPP
#define _SEA_BATTLE_COMMON_STRUCTS_UICLIENT_HPP

#include <common/interfaces/IBoatSetUpManager.hpp>
#include <common/interfaces/IIPCClient.hpp>
#include <common/interfaces/IPlayGameManager.hpp>
#include <common/interfaces/ISettingsManager.hpp>

#include <memory>

namespace Structs {

class UIClient {
public:

    UIClient(
        std::shared_ptr<::Interfaces::IBoatSetUpManager> boatSetUpManager,
        std::shared_ptr<::Interfaces::IIPCClient> IPCClient,
        std::shared_ptr<::Interfaces::IPlayGameManager> gameManager,
        std::shared_ptr<::Interfaces::ISettingsManager> settingsManager
    );

    inline std::shared_ptr<::Interfaces::IBoatSetUpManager> boatSetUpManager() const;
    inline std::shared_ptr<::Interfaces::IIPCClient> IPCClient() const;
    inline std::shared_ptr<::Interfaces::IPlayGameManager> gameManager() const;
    inline std::shared_ptr<::Interfaces::ISettingsManager> settingsManager() const;

private:
    std::shared_ptr<::Interfaces::IBoatSetUpManager> m_boatSetUpManager;
    std::shared_ptr<::Interfaces::IIPCClient> m_IPCClient;
    std::shared_ptr<::Interfaces::IPlayGameManager> m_gameManager;
    std::shared_ptr<::Interfaces::ISettingsManager> m_settingsManager;
};

std::shared_ptr<::Interfaces::IBoatSetUpManager> UIClient::boatSetUpManager() const
{
    return m_boatSetUpManager;
}

std::shared_ptr<::Interfaces::IIPCClient> UIClient::IPCClient() const
{
    return m_IPCClient;
}

std::shared_ptr<::Interfaces::IPlayGameManager> UIClient::gameManager() const
{
    return m_gameManager;
}

std::shared_ptr<::Interfaces::ISettingsManager> UIClient::settingsManager() const
{
    return m_settingsManager;
}

} //Structs

#endif //_SEA_BATTLE_COMMON_STRUCTS_UICLIENT_HPP