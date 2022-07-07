#pragma once

class PlayerStateNormalWallSlide
{
public:
    PlayerStateNormalWallSlide(al::LiveActor*, PlayerConst const*, PlayerInput const*, IUsePlayerCollision*, PlayerAnimator*);
    appear();
    exeKeep();
    followNormal();
    exeSlide();
    ~PlayerStateNormalWallSlide();
};
