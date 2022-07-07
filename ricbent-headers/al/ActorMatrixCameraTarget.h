#pragma once

namespace al { 

class ActorMatrixCameraTarget
{
public:
    calcTrans(sead::Vector3<float>*) const;
    calcSide(sead::Vector3<float>*) const;
    calcUp(sead::Vector3<float>*) const;
    calcFront(sead::Vector3<float>*) const;
    calcVelocity(sead::Vector3<float>*) const;
    ActorMatrixCameraTarget(al::LiveActor const*, sead::Matrix34<float> const*);
};

} 
