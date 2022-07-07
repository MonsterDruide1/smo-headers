#pragma once

namespace al { 

class ActorPoseKeeperTFGSV
{
public:
    ActorPoseKeeperTFGSV();
    updatePoseTrans(sead::Vector3<float> const&);
    updatePoseRotate(sead::Vector3<float> const&);
    updatePoseQuat(sead::Quat<float> const&);
    updatePoseMtx(sead::Matrix34<float> const*);
    calcBaseMtx(sead::Matrix34<float>*) const;
    getGravity() const;
    getGravityPtr();
};

} 
