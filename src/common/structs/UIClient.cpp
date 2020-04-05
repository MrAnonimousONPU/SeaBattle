#include <common/structs/UIClient.hpp>

::Structs::UIClient::UIClient(
    std::shared_ptr<::Interfaces::IBoatSetUpManager> boatSetUpManager,
    std::shared_ptr<::Interfaces::IIPCClient> IPCClient,
    std::shared_ptr<::Interfaces::IPlayGameManager> gameManager,
    std::shared_ptr<::Interfaces::ISettingsManager> settingsManager)
    : m_boatSetUpManager(boatSetUpManager)
    , m_IPCClient(IPCClient)
    , m_gameManager(gameManager)
    , m_settingsManager(settingsManager)
{
}