#pragma once

namespace al { 

class CameraPoserKinopioBrigade
{
public:
    CameraPoserKinopioBrigade(char const*);
    start(al::CameraStartInfo const&);
    resetValues(float, float);
    update();
    calcDrcAngle();
    calcBaseAngle();
    convergeBaseAngle();
    commitCamera();
    followLookAt(float, sead::Vector3<float> const&, sead::Vector3<float> const&, al::CameraPoserKinopioBrigade::V3bool const&);
    loadParam(al::ByamlIter const&);
    transferParam(al::CameraPoserKinopioBrigade const*);
    isEnableRotateByPad() const;
};

} 
