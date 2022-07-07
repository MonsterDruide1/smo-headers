#pragma once

class PlayerStateSpinCap
{
public:
    PlayerStateSpinCap(al::LiveActor*, PlayerConst const*, PlayerInput const*, PlayerCounterForceRun const*, al::WaterSurfaceFinder const*, IUsePlayerCollision const*, PlayerTrigger*, PlayerSpinCapAttack*, PlayerAnimator*, PlayerJointParamCapThrow*);
    appear();
    kill();
    update();
    control();
    noticeInWater();
    resetJoint();
    cancelPoseInterpole();
    isEnableCancelHipDrop() const;
    isEnableCancelAir() const;
    isSpinAttackAir() const;
    isEnableCancelGround() const;
    isEnableCancelCarry() const;
    isEnableReThrowCap() const;
    isWaterSurfaceRun() const;
    exeSpinGround();
    updateSpinGroundNerve();
    exeSpinGroundSeparate();
    exeSpinAir();
    updateSpinAirNerve();
    exeSpinAirSeparate();
    exeFall();
    ~PlayerStateSpinCap();
};
