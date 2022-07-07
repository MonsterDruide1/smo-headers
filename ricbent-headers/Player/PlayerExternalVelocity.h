#pragma once

class PlayerExternalVelocity
{
public:
    PlayerExternalVelocity(al::LiveActor const*, IUsePlayerCollision const*, sead::Vector3<float> const*);
    receiveMsgPlayer(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveMsgCap(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    requestApplyLastGroundInertia();
    cancelAndFeedbackLastGroundInertia(al::LiveActor*, float, bool);
    update();
    updatePadRumbleExternalForce();
    updateLastGroundForce(bool);
    reset();
    isExistForce() const;
    isExistSnapForce() const;
};
