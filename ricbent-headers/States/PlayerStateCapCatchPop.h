#pragma once

class PlayerStateCapCatchPop
{
public:
    PlayerStateCapCatchPop(al::LiveActor*, PlayerConst const*, IUsePlayerCollision const*, PlayerInput const*, PlayerAnimator*, HackCap*);
    appear();
    exePop();
    ~PlayerStateCapCatchPop();
};
