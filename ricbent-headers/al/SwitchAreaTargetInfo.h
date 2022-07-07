#pragma once

namespace al { 

class SwitchAreaTargetInfo
{
public:
    SwitchAreaTargetInfo(int, int);
    SwitchAreaTargetInfo(sead::Vector3<float>*, int);
    update(al::PlayerHolder const*, al::SceneCameraInfo const*);
};

} 
