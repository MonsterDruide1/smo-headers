#pragma once

class YoshiStateHackWait
{
public:
    YoshiStateHackWait(al::LiveActor*, IUsePlayerHack**, PlayerConst const*, IUsePlayerCollision const*, YoshiTongue const*, PlayerAnimator*, PlayerTrigger*);
    appear();
    startTongueEat();
    endTongueEat();
    exeLand();
    exeWait();
    exeEatStart();
    exeEat();
    exeEatEnd();
    ~YoshiStateHackWait();
};
