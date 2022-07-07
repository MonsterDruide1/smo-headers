#pragma once

namespace al { 

class ActorCameraTarget
{
public:
    ActorCameraTarget(al::LiveActor const*, float, sead::Vector3<float> const*);
    getTargetName() const;
    calcTrans(sead::Vector3<float>*) const;
    calcSide(sead::Vector3<float>*) const;
    calcUp(sead::Vector3<float>*) const;
    calcFront(sead::Vector3<float>*) const;
    calcGravity(sead::Vector3<float>*) const;
    calcVelocity(sead::Vector3<float>*) const;
    isCollideGround() const;
    isInWater() const;
};

} 
