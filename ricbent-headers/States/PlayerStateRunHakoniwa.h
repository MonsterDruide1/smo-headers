#pragma once

class PlayerStateRunHakoniwa
{
public:
    PlayerStateRunHakoniwa(al::LiveActor*, PlayerConst const*, PlayerInput const*, IUsePlayerCollision const*, PlayerCounterForceRun const*, PlayerCounterQuickTurnJump const*, PlayerTrigger*, PlayerAnimator*, PlayerEffect*, PlayerJointParamCenterDynamics*, IJudge const*, bool);
    appear();
    kill();
    control();
    isEnableLookAt() const;
    isRunDashFast() const;
    tryTurnJump(sead::Vector3<float>*);
    getCenterTiltRateMax() const;
    getCapDynamicsRate() const;
    exePivot();
    exeRun();
    exeBrake();
    exeTurn();
    exeWallPush();
    ~PlayerStateRunHakoniwa();
};
