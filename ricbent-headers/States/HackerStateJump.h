#pragma once

class HackerStateJump
{
public:
    HackerStateJump(al::LiveActor*, IUsePlayerHack**, bool, bool);
    appear();
    setupTurnControlParam(float, float, float, float, int, int, int);
    setupForceJumpExtend(bool);
    isHoldJumpExtend() const;
    updateJumpPower(float, float);
    exeJumpStart();
    updateJump();
    exeJump();
    doLanding();
    ~HackerStateJump();
};
