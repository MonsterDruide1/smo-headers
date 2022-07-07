#pragma once

class PlayerStateRise
{
public:
    PlayerStateRise(al::LiveActor*, PlayerConst const*, IUsePlayerCollision const*, PlayerInput const*, PlayerAnimator*);
    appear();
    exeRise();
    ~PlayerStateRise();
};
