#pragma once

namespace al { 

class ActorPoseKeeperTQGSV
{
public:
    ActorPoseKeeperTQGSV();
    updatePoseTrans(sead::Vector3<float> const&);
    updatePoseRotate(sead::Vector3<float> const&);
    updatePoseQuat(sead::Quat<float> const&);
    updatePoseMtx(sead::Matrix34<float> const*);
    calcBaseMtx(sead::Matrix34<float>*) const;
    getScale() const;
    getVelocity() const;
    getQuat() const;
    getGravity() const;
    getScalePtr();
    getVelocityPtr();
    getQuatPtr();
    getGravityPtr();
};

} 
