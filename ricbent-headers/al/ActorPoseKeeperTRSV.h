#pragma once

namespace al { 

class ActorPoseKeeperTRSV
{
public:
    ActorPoseKeeperTRSV();
    updatePoseTrans(sead::Vector3<float> const&);
    updatePoseRotate(sead::Vector3<float> const&);
    updatePoseQuat(sead::Quat<float> const&);
    updatePoseMtx(sead::Matrix34<float> const*);
    calcBaseMtx(sead::Matrix34<float>*) const;
    getRotate() const;
    getScale() const;
    getVelocity() const;
    getRotatePtr();
    getScalePtr();
    getVelocityPtr();
};

} 
