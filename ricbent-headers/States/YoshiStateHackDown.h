#pragma once

class YoshiStateHackDown
{
public:
    YoshiStateHackDown(al::LiveActor*, IUsePlayerHack**, PlayerConst const*, IUsePlayerCollision const*, PlayerAnimator*);
    appear();
    isLand() const;
    isEnableCancel() const;
    exeDown();
    exeLand();
    ~YoshiStateHackDown();
};
