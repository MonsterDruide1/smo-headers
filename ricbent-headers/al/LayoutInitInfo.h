#pragma once

namespace al { 

class LayoutInitInfo
{
public:
    LayoutInitInfo();
    init(al::ExecuteDirector*, al::EffectSystemInfo const*, al::SceneObjHolder*, al::AudioDirector const*, al::CameraDirector*, al::LayoutSystem const*, al::MessageSystem const*, al::GamePadSystem const*, al::PadRumbleDirector*);
    getMessageSystem() const;
};

} 
