#pragma once

class PlayerStateJump2D3D
{
public:
    PlayerStateJump2D3D(al::LiveActor*, PlayerConst const*, IUsePlayerCollision const*, IPlayerModelChanger const*, IUseDimension const*, PlayerInput const*, PlayerAnimator*);
    initContinuousJump(PlayerContinuousJump*);
    initUseTriggerCheck(PlayerTrigger*);
    initUseCounterCapCatch(PlayerCounterAfterCapCatch const*);
    appear();
    calcJumpPowerBorderSpeedMin() const;
    calcJumpPowerBorderSpeedMax() const;
    calcJumpPowerMin() const;
    calcJumpPowerMax() const;
    kill();
    tryCountUpContinuousJump(PlayerContinuousJump*);
    exeJump();
    calcJumpAnimName() const;
    calcJumpGravity() const;
    ~PlayerStateJump2D3D();
};
