#pragma once

namespace al { 

class ActorPoseKeeperBase
{
public:
    ActorPoseKeeperBase();
    copyPose(al::ActorPoseKeeperBase const*);
    getRotate() const;
    getScale() const;
    getVelocity() const;
    getFront() const;
    getUp() const;
    getQuat() const;
    getGravity() const;
    getMtx() const;
    getRotatePtr();
    getScalePtr();
    getVelocityPtr();
    getFrontPtr();
    getUpPtr();
    getQuatPtr();
    getGravityPtr();
    getMtxPtr();
    sDefaultVelocity;
};

} 
