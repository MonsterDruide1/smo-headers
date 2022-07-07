#pragma once

class PlayerStateSlope
{
public:
    PlayerStateSlope(al::LiveActor*, PlayerConst const*, PlayerInput const*, IUsePlayerCollision const*, PlayerAnimator*);
    appear();
    kill();
    isEnableCancelSandSink() const;
    calcSlideSpeed() const;
    exeSlide();
    ~PlayerStateSlope();
};
