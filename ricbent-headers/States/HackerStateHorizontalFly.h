#pragma once

class HackerStateHorizontalFly
{
public:
    HackerStateHorizontalFly(al::LiveActor*, IUsePlayerHack**, char const*, char const*, char const*, char const*);
    appear();
    kill();
    control();
    isBoosting() const;
    isTurbo() const;
    exeWait();
    checkSetNerveTurbo();
    exeFly();
    checkSetNerveWait();
    exeBoostStart();
    boostAccelUpdate();
    exeBoost();
    exeTurbo();
    ~HackerStateHorizontalFly();
};
