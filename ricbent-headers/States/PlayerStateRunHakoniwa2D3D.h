#pragma once

class PlayerStateRunHakoniwa2D3D
{
public:
    PlayerStateRunHakoniwa2D3D(al::LiveActor*, PlayerConst const*, IUseDimension const*, PlayerInput const*, IUsePlayerCollision const*, al::WaterSurfaceFinder const*, PlayerCounterForceRun const*, PlayerCounterQuickTurnJump const*, PlayerTrigger*, PlayerAnimator*, PlayerEffect*, PlayerJointParamCenterDynamics*, bool);
    appear();
    update();
    isEnableLookAt() const;
    isGroundSpin() const;
    isSpinClockwise() const;
    isRunDashFast() const;
    isRunWaterSurface() const;
    isBrake2D() const;
    tryTurnJump(IJudge*, sead::Vector3<float>*);
    getTurnTiltRate() const;
    getCenterTiltRate() const;
    getInverseKinematicsRate() const;
    getCapDynamicsRate() const;
    exeRun3D();
    exeGroundSpin3D();
    exeRun2D();
    ~PlayerStateRunHakoniwa2D3D();
};
