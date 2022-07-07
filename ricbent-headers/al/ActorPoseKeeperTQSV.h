#pragma once

namespace al { 

class ActorPoseKeeperTQSV
{
public:
    ActorPoseKeeperTQSV();
    updatePoseTrans(sead::Vector3<float> const&);
    updatePoseRotate(sead::Vector3<float> const&);
    updatePoseQuat(sead::Quat<float> const&);
    updatePoseMtx(sead::Matrix34<float> const*);
    calcBaseMtx(sead::Matrix34<float>*) const;
    getScale() const;
    getVelocity() const;
    getQuat() const;
    getScalePtr();
    getVelocityPtr();
    getQuatPtr();
};

} 
