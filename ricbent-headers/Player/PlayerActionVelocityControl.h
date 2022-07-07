#pragma once

class PlayerActionVelocityControl
{
public:
    PlayerActionVelocityControl(al::LiveActor*, IUsePlayerCollision const*);
    calcFrontBrake(float);
    calcSideVelocityLimit(sead::Vector3<float> const&, float, float, float);
    calcSideBrake(float);
    calcTrample(float);
    calcSnap(sead::Vector3<float> const&, float);
    calcOnGround(sead::Vector3<float> const&);
    apply();
};
