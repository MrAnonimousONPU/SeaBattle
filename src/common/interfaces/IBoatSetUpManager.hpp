#ifndef _SEA_BATTLE_COMMON_INTERFACES_IBOATSETUPMANAGER_HPP
#define _SEA_BATTLE_COMMON_INTERFACES_IBOATSETUPMANAGER_HPP

#include <common/structs/Boat.hpp>
#include <common/constants/ErrorMessage.hpp>

#include <functional>

namespace Interfaces {

struct IBoatSetUpManager {

    virtual ~IBoatSetUpManager() = default;

    virtual ::Enum::ErrorMessage& setUpBoat(const ::Structs::Boat&) = 0;
    virtual ::Enum::ErrorMessage& clearField() = 0;
    virtual ::Enum::ErrorMessage& sendRedyToPlay() = 0;

    virtual void subscribeToDrawField(const std::function<void(::Structs::Field&)>) = 0;
};
}

#endif //_SEA_BATTLE_COMMON_INTERFACES_IBOATSETUPMANAGER_HPP