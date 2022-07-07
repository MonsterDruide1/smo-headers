#pragma once

class PlayerActionGroundMoveControl
{
public:
    PlayerActionGroundMoveControl(al::LiveActor*, PlayerConst const*, PlayerInput const*, IUsePlayerCollision const*);
    initDash(IJudge*, float, int);
    setupDash(float, int);
    setup(float, float, int, int, int, float, float, int);
    appear();
    reset(sead::Vector3<float> const&);
    calcInitBrakeOnCounter();
    update();
    updateSkateMove();
    updateNormalMove();
    updateNormalAndSnap(sead::Vector3<float>*);
    calcTurnTiltRate() const;
    calcMoveInput(sead::Vector3<float>*, sead::Vector3<float> const&);
    isActiveSquatBrake() const;
    updateHillAffect(sead::Vector3<float> const&, sead::Vector3<float> const&, bool);
    calcMaxSpeed(float) const;
    calcAccelRate(float) const;
    updatePoseUpFront(sead::Vector3<float> const&, sead::Vector3<float> const&, float);
};
