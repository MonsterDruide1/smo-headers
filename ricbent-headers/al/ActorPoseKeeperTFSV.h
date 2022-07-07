#pragma once

namespace al { 

class ActorPoseKeeperTFSV
{
public:
    ActorPoseKeeperTFSV();
    updatePoseTrans(sead::Vector3<float> const&);
    updatePoseRotate(sead::Vector3<float> const&);
    updatePoseQuat(sead::Quat<float> const&);
    updatePoseMtx(sead::Matrix34<float> const*);
    calcBaseMtx(sead::Matrix34<float>*) const;
    getScale() const;
    getVelocity() const;
    getFront() const;
    getScalePtr();
    getVelocityPtr();
    getFrontPtr();
};

} 
