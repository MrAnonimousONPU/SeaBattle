#ifndef _SEA_BATTLE_COMMON_INTERFACES_ISETTINGSMANAGER_HPP
#define _SEA_BATTLE_COMMON_INTERFACES_ISETTINGSMANAGER_HPP

#include <common/constants/ErrorMessage.hpp>
#include <common/constants/FieldOrientation.hpp>

#include <string>

namespace Interfaces {

struct ISettingsManager {

    virtual ~ISettingsManager() = default;

    virtual ::Enum::ErrorMessage saveNickName(std::string) = 0;
    virtual std::string& getNickName() = 0;
    virtual int32_t getCountWins() = 0;
    virtual int32_t getCountLoses() = 0;
    virtual double getWinRate() = 0;
    virtual ::Enum::FieldOrientation getFieldOrientation() = 0;
    virtual ::Enum::ErrorMessage setFieldOrientation(::Enum::FieldOrientation) = 0;
};
}

#endif //_SEA_BATTLE_COMMON_INTERFACES_ISETTINGSMANAGER_HPP