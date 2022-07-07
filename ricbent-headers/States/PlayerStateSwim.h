#pragma once

class PlayerStateSwim
{
public:
    PlayerStateSwim(al::LiveActor*, PlayerConst const*, IUsePlayerCollision const*, PlayerInput const*, PlayerTrigger const*, PlayerCarryKeeper const*, PlayerModelHolder const*, PlayerExternalVelocity const*, PlayerAnimator*, PlayerSpinCapAttack*, al::WaterSurfaceFinder const*, PlayerEffect*, PlayerJointParamSwim*);
    appear();
    tryReactionWaterIn();
    kill();
    control();
    attackHipDropKnockDown(al::HitSensor*, al::HitSensor*);
    calcEyeHeadTiltRate() const;
    isEndSwimJump() const;
    isEndSwimJumpPop() const;
    isEndSwimJumpHipDrop() const;
    isEnableHipDropAttack() const;
    isEnableCapThrow() const;
    isEnableCapThrowSurface() const;
    isSurface() const;
    isEnableTalkSwim() const;
    isEnableLookAt() const;
    isEnableReactionCapCatch() const;
    isEnableCarryAction() const;
    isEnableWallHitDown() const;
    isHeadSliding() const;
    isEnableSurfaceShadow() const;
    isEnableRecoveryLife() const;
    isSpinCapSurface() const;
    isReduceOxygen() const;
    isWaitGround() const;
    isEnableTrample() const;
    isEnableCapTouchJump() const;
    startCapThrow();
    startCapThrowSurface();
    tryReactionWaterOut();
    exeSwimSurface();
    exeSwimMove();
    exeSwimPaddle();
    exeSwimLand();
    exeSwimWalk();
    exeSwimDive();
    updateNerveDownFall();
    exeSwimFallIn();
    exeSwimHeadIn();
    exeSwimDiveIn();
    exeSwimHipDropStart();
    exeSwimHipDropLoop();
    exeSwimHipDropLand();
    exeSwimHipDropHeadSliding();
    exeSwimHipDropHeadSlidingEnd();
    exeSwimHipDropJump();
    exeSwimSpinCap();
    exeSwimSpinCapSurface();
    exeSwimTrample();
    exeSwimReflectDownFall();
    exeEndSwimJump();
    exeEndSwimJumpPop();
    exeEndSwimJumpHipDrop();
    tryChangeHipDropLand(int*, int*);
    ~PlayerStateSwim();
};
