#pragma once

class PlayerStatePress
{
public:
    PlayerStatePress(al::LiveActor*, IUsePlayerCollision const*, PlayerAnimator*);
    appear();
    exePress();
    ~PlayerStatePress();
};
