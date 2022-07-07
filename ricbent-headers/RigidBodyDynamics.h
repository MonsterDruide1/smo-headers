#pragma once

class RigidBodyDynamics
{
public:
    RigidBodyDynamics(int, int);
    initPose(al::LiveActor const*, al::HitSensor*, sead::Vector3<float> const&);
    updateForcePointWorld();
    syncHost(sead::Vector3<float> const&, sead::Vector3<float> const&);
    update(ForcePoint const*);
    updateStep(ForcePoint const*);
    applyImpulse(sead::Vector3<float> const&);
    calcActorPose(al::LiveActor*);
    isFixed() const;
    addRigidBodyShape(RigidBodyShapeKeeper*);
    updateTensor();
    removeRigidBodyShape(RigidBodyShapeKeeper*);
    getFreeShapeNum() const;
};
