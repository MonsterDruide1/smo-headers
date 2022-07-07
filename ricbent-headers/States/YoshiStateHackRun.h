#pragma once

class YoshiStateHackRun
{
public:
    YoshiStateHackRun(al::LiveActor*, IUsePlayerHack**, al::LiveActor*, PlayerConst const*, IUsePlayerCollision const*, PlayerCounterForceRun const*, PlayerAnimator*, PlayerEffect*);
    appear();
    kill();
    endRun();
    tryTurnJump(sead::Vector3<float>*);
    invalidateTurn();
    validateTurn();
    exePivot();
    exeRun();
    exeBrake();
    exeTurn();
    ~YoshiStateHackRun();
};
