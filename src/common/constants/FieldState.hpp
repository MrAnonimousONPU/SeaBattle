#ifndef _SEA_BATTLE_COMMON_CONSTANTS_FIELDSTATE_HPP
#define _SEA_BATTLE_COMMON_CONSTANTS_FIELDSTATE_HPP

namespace Enum{

struct FieldState {

    enum type {
        Empty = 0,
        Miss = 1,
        Hit = 2,
        Kill = 3
    };
};
}

#endif //_SEA_BATTLE_COMMON_CONSTANTS_FIELDSTATE_HPP