#pragma once

class YoshiStateHackJumpFlap
{
public:
    YoshiStateHackJumpFlap(al::LiveActor*, IUsePlayerHack**, al::LiveActor*, PlayerConst const*, IUsePlayerCollision const*, PlayerTrigger const*, PlayerAnimator*);
    appear();
    kill();
    exeRise();
    exeFall();
    ~YoshiStateHackJumpFlap();
};
