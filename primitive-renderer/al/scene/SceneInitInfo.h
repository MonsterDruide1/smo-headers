#pragma once

#include "game/GameData/GameDataHolder.h"



namespace al {
	class ScreenCaptureExecutor;
	
    struct SceneInitInfo {
        struct GameSystemInfo *gameSysInfo; // 0
        GameDataHolderBase *gameDataHolderBase; // 8
		al::ScreenCaptureExecutor *mScreenCaptureExecutor; // 10
		char *initStageName; // 18
		u32 scenarioNo; // 20
    };
}
