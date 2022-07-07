#pragma once

class PlayerStateGroundSpin
{
public:
    PlayerStateGroundSpin(al::LiveActor*, IUsePlayerCollision const*, PlayerInput const*, PlayerConst const*, PlayerAnimator*);
    appear();
    exeGroundSpin();
    ~PlayerStateGroundSpin();
};
