#pragma once

namespace al { 

class ActorCameraSubTarget
{
public:
    ActorCameraSubTarget(al::LiveActor const*);
    getTargetName() const;
    calcTrans(sead::Vector3<float>*) const;
    calcSide(sead::Vector3<float>*) const;
    calcUp(sead::Vector3<float>*) const;
    calcFront(sead::Vector3<float>*) const;
    calcVelocity(sead::Vector3<float>*) const;
};

} 
