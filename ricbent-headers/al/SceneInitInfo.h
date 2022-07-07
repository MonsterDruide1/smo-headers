#pragma once

namespace al { 

class SceneInitInfo
{
public:
    SceneInitInfo(al::GameSystemInfo const*, al::GameDataHolderBase*, al::ScreenCaptureExecutor*, char const*, int, char const*, al::AudioDirector*);
};

} 
