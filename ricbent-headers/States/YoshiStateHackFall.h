#pragma once

class YoshiStateHackFall
{
public:
    YoshiStateHackFall(al::LiveActor*, IUsePlayerHack**, PlayerConst const*, IUsePlayerCollision const*, PlayerAnimator*);
    appear();
    exeFall();
    ~YoshiStateHackFall();
};
