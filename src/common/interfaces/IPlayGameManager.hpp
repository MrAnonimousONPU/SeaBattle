#ifndef _SEA_BATTLE_COMMON_INTERFACES_IPLAYGAMEMANAGER_HPP
#define _SEA_BATTLE_COMMON_INTERFACES_IPLAYGAMEMANAGER_HPP

#include <common/structs/Field.hpp>
#include <common/structs/Point.hpp>
#include <common/constants/ErrorMessage.hpp>

namespace Interfaces {

struct IPlayGameManager {

    virtual ~IPlayGameManager() = default;

    virtual ::Enum::ErrorMessage shoot(::Structs::Point&) = 0;
    virtual void onReceivedShootResult() = 0;
    virtual ::Structs::Field& getEnemyField() = 0;

    virtual void onEnemyHit() = 0;
    virtual ::Structs::Field& getAlliedField() = 0;
};
}

#endif //_SEA_BATTLE_COMMON_INTERFACES_IPLAYGAMEMANAGER_HPP