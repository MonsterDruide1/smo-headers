#pragma once

class PlayerStateNormalJump
{
public:
    PlayerStateNormalJump(al::LiveActor*, PlayerConst const*, IUsePlayerCollision const*, PlayerInput const*, PlayerAnimator*);
    initContinuousJump(PlayerContinuousJump*);
    appear();
    calcJumpPowerMin();
    calcJumpPowerMax();
    kill();
    exeJump();
    calcJumpAnimName();
    calcJumpGravity();
    sendMsgUpperPunch();
    ~PlayerStateNormalJump();
};
