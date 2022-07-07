#pragma once

class PlayerStateRun2D
{
public:
    PlayerStateRun2D(al::LiveActor*, PlayerConst const*, PlayerInput const*, IUsePlayerCollision const*, PlayerAnimator*);
    appear();
    isBrake() const;
    exeRun();
    exeBrake();
    exeTurn();
    ~PlayerStateRun2D();
};
