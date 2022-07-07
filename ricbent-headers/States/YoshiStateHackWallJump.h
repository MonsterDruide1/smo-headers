#pragma once

class YoshiStateHackWallJump
{
public:
    YoshiStateHackWallJump(al::LiveActor*, IUsePlayerHack**, PlayerConst const*, IUsePlayerCollision const*, PlayerTrigger const*, YoshiTongue const*, PlayerAnimator*);
    appear();
    exeJump();
    ~YoshiStateHackWallJump();
};
