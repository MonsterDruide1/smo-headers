#pragma once

namespace al { 

class CameraPoserEntrance
{
public:
    CameraPoserEntrance(char const*);
    initParam(float, float, float, sead::Vector3<float> const&);
    initParam(float, sead::Vector3<float> const&, sead::Vector3<float> const&);
    initLookAtPosDirect(sead::Vector3<float> const&);
    loadParam(al::ByamlIter const&);
    start(al::CameraStartInfo const&);
    movement();
    update();
    exeKeepByFlag();
    exeKeepInAir();
    exeWait();
    isEnableRotateByPad() const;
};

} 
