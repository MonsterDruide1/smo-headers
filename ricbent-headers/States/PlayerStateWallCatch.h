#pragma once

class PlayerStateWallCatch
{
public:
    PlayerStateWallCatch(al::LiveActor*, PlayerConst const*, PlayerInput const*, IUsePlayerCollision*, IUsePlayerCeilingCheck const*, PlayerModelHolder const*, PlayerAreaChecker const*, PlayerAnimator*, PlayerTrigger*, PlayerJudgePreInputJump*, PlayerJointParamGrab*);
    appear();
    initIgnoreFallInput();
    kill();
    isWallCatchForm() const;
    update();
    control();
    setup(al::CollisionParts const*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
    endFallFromWall();
    isClimbJump() const;
    isClimbJumpFall() const;
    isFallEnd() const;
    isEnableIK() const;
    isEnableTrample() const;
    isEnableDamage() const;
    getWallCatchFront() const;
    getCeilingCheckPos() const;
    exeStart();
    followCollision(bool*, bool);
    enableClimb();
    tryStartClimbFallMove();
    exeWait();
    updateWallCatchKeep(bool);
    exeMoveLeft();
    initMoveFrameLeftRight();
    exeMoveRight();
    exeClimb();
    followCollisionClimb();
    endClimb();
    exeClimbFast();
    exeJump();
    exeEndFall();
    moveCatchPos(al::CollisionParts const*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
    ~PlayerStateWallCatch();
};
