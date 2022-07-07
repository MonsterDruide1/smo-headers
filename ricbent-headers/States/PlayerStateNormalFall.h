#pragma once

class PlayerStateNormalFall
{
public:
    PlayerStateNormalFall(al::LiveActor*, PlayerConst const*, IUsePlayerCollision const*, PlayerInput const*, PlayerAnimator*);
    appear();
    exeFall();
    ~PlayerStateNormalFall();
};
