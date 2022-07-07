#pragma once

class PlayerStateFreeRun
{
public:
    PlayerStateFreeRun(al::LiveActor*, PlayerConst const*, PlayerInput const*, IUsePlayerCollision const*, PlayerAnimator*);
    appear();
    exeRun();
    updateCollideNormal();
    calcMaxSpeed() const;
    isBrakeOnBorder() const;
    tryChangeRunAnim(char const*);
    exeBrake();
    exeTurn();
    calcNormalMaxSpeed() const;
    ~PlayerStateFreeRun();
};
