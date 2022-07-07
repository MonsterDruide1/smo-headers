#pragma once

class PlayerStateEndHack
{
public:
    PlayerStateEndHack(al::LiveActor*, PlayerConst const*, IUsePlayerCollision const*, PlayerInput const*, PlayerTrigger*, PlayerAnimator*);
    appear();
    exeJump();
    ~PlayerStateEndHack();
};
