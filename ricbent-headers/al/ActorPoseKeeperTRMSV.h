#pragma once

namespace al { 

class ActorPoseKeeperTRMSV
{
public:
    ActorPoseKeeperTRMSV();
    updatePoseTrans(sead::Vector3<float> const&);
    updatePoseRotate(sead::Vector3<float> const&);
    updatePoseQuat(sead::Quat<float> const&);
    updatePoseMtx(sead::Matrix34<float> const*);
    calcBaseMtx(sead::Matrix34<float>*) const;
    getRotate() const;
    getScale() const;
    getVelocity() const;
    getMtx() const;
    getRotatePtr();
    getScalePtr();
    getVelocityPtr();
    getMtxPtr();
};

} 
