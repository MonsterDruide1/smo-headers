#pragma once

class PlayerJointControlKeeper
{
public:
    PlayerJointControlKeeper(al::LiveActor*, PlayerConst const*, bool, bool, bool);
    update();
    updateLookAt();
    updateSwimPose();
    updateCenter();
    updateGroundPose();
    updateCapThrow();
    updatePoleClimb();
    updateGrab();
    updatePartsDynamics();
    calcLookAtEyePos(sead::Vector3<float>*) const;
    resetPartsDynamics();
    updateLookAtTarget(al::HitSensor*);
    calcGroundPoseUp(sead::Vector3<float>*) const;
    getHeadTiltRate() const;
};
