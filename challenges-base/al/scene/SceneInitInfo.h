#pragma once

#include "game/GameData/GameDataHolderAccessor.h"
#include "game/System/GameSystemInfo.h"
#include <basis/seadTypes.h>

namespace al {
    struct SceneInitInfo {
        al::GameSystemInfo * gameSysInfo;
        GameDataHolderAccessor gameDataHolder;
        u8 field_0x10[8];
        char *initStageName;
        u32 scenarioNo;
    };
}
