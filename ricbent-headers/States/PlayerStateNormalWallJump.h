#pragma once

class PlayerStateNormalWallJump
{
public:
    PlayerStateNormalWallJump(al::LiveActor*, PlayerConst const*, PlayerInput const*, IUsePlayerCollision const*, PlayerTrigger const*, PlayerAnimator*, PlayerActionDiveInWater*);
    appear();
    exeJump();
    ~PlayerStateNormalWallJump();
};
