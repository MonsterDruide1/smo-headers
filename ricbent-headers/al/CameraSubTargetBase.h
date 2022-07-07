#pragma once

namespace al { 

class CameraSubTargetBase
{
public:
    calcSide(sead::Vector3<float>*) const;
    calcUp(sead::Vector3<float>*) const;
    calcFront(sead::Vector3<float>*) const;
    calcVelocity(sead::Vector3<float>*) const;
    CameraSubTargetBase();
};

} 
