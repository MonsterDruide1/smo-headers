#pragma once

class PlayerStateNormalWait
{
public:
    PlayerStateNormalWait(al::LiveActor*, PlayerConst const*, char const*, IUsePlayerCollision const*, PlayerAnimator*);
    appear();
    exeWait();
    ~PlayerStateNormalWait();
};
