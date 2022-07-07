#pragma once

namespace al { 

class ActorPoseKeeperTFUSV
{
public:
    ActorPoseKeeperTFUSV();
    updatePoseTrans(sead::Vector3<float> const&);
    updatePoseRotate(sead::Vector3<float> const&);
    updatePoseQuat(sead::Quat<float> const&);
    updatePoseMtx(sead::Matrix34<float> const*);
    calcBaseMtx(sead::Matrix34<float>*) const;
    getUp() const;
    getUpPtr();
};

} 
