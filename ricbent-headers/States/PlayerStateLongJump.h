#pragma once

class PlayerStateLongJump
{
public:
    PlayerStateLongJump(al::LiveActor*, PlayerConst const*, PlayerInput const*, IUsePlayerCollision const*, PlayerTrigger*, PlayerAnimator*, PlayerContinuousLongJump*, PlayerActionDiveInWater*);
    appear();
    exeJump();
    ~PlayerStateLongJump();
};
