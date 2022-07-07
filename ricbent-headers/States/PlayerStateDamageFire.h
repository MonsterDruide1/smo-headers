#pragma once

class PlayerStateDamageFire
{
public:
    PlayerStateDamageFire(al::LiveActor*, PlayerConst const*, IUsePlayerCollision const*, PlayerInput const*, PlayerAnimator*, IJudge*);
    appear();
    control();
    isEndFirstLand() const;
    isEnableJump() const;
    isEnablePeachAmiibo() const;
    getEnableCancelCollisionSnapFrame() const;
    exeJump();
    exeJump2nd();
    exeRun();
    exeFall();
    exeDead();
    ~PlayerStateDamageFire();
};
