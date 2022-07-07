#pragma once

class YoshiStateHackTongueShrink
{
public:
    YoshiStateHackTongueShrink(al::LiveActor*, IUsePlayerHack**, al::LiveActor*, PlayerConst const*, YoshiTongue const*, PlayerCounterForceRun const*, YoshiActionTongueAttack*, IUsePlayerCollision*, PlayerAnimator*, PlayerEffect*);
    appear();
    kill();
    setupGroundSnap(al::CollisionParts const*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
    setupWallSnap(al::CollisionParts const*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, bool);
    isEnableAccelForceRun() const;
    isEnablePullForce() const;
    isEnableWallCling() const;
    isEnableShrinkEndJump() const;
    isEnableTongueKeepAction() const;
    isJumpRolling() const;
    isCollisionShapeJump() const;
    isGroundConnectRun() const;
    isEndCancelForceRun() const;
    getLoopRunCount() const;
    endShrinkAndJump();
    endLoopRunMoveDirection();
    exeRun();
    exeLoopRun();
    exeJump();
    exeJumpKeep();
    exeFall();
    ~YoshiStateHackTongueShrink();
};
