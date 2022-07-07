#pragma once

class PlayerStateSquat
{
public:
    PlayerStateSquat(al::LiveActor*, PlayerConst const*, PlayerAnimator*, PlayerInput const*, IUsePlayerCollision const*, IPlayerModelChanger const*, PlayerTrigger const*, IJudge*, IJudge*, IJudge*);
    appear();
    isEnableLongJump() const;
    exeBrake();
    setNerveStandUpOrKill();
    exeWait();
    fixPressRumble();
    exeWalk();
    exeStandUp();
    ~PlayerStateSquat();
};
