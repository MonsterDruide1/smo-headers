#pragma once

class PlayerStateRun
{
public:
    PlayerStateRun(al::LiveActor*, PlayerConst const*, PlayerInput const*, IUsePlayerCollision const*, PlayerAnimator*, IJudge*);
    appear();
    tryTurnJump(IJudge*);
    exePivot();
    exeRun();
    tryChangeRunAnim(char const*);
    exeBrake();
    exeTurn();
    ~PlayerStateRun();
};
