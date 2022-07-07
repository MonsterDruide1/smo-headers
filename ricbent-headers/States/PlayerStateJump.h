#pragma once

class PlayerStateJump
{
public:
    PlayerStateJump(al::LiveActor*, PlayerConst const*, IPlayerModelChanger const*, IUseDimension const*, PlayerInput const*, PlayerJumpMessageRequest const*, IJudge const*, PlayerCounterForceRun const*, PlayerJointControlKeeper const*, IUsePlayerCollision const*, PlayerTrigger*, PlayerContinuousJump*, PlayerAnimator*, PlayerActionDiveInWater*, HackCap*, IJudge*, bool);
    appear();
    calcJumpPowerBorderSpeedMin() const;
    calcJumpPowerBorderSpeedMax() const;
    calcJumpPowerMin() const;
    calcJumpPowerMax() const;
    calcJumpGravity() const;
    tryCountUpContinuousJump(PlayerContinuousJump*);
    isJumpCapCatch() const;
    isJumpSpinFlower() const;
    isJumpSpinGround() const;
    isJumpSpinGroundClockwise() const;
    isJumpBack() const;
    isHovering() const;
    isEndJumpDownFallLand() const;
    isHoldDownFall() const;
    isEnableHipDropStart() const;
    isEnableTrampleByHipDropAttack() const;
    isEnableReactionCapCatch() const;
    isEnableCancelCarryThrow() const;
    isFormSquat2D() const;
    exeJump();
    trySubAnimJumpReaction();
    calcJumpAnimName() const;
    exeJumpSpinFlower();
    exeJumpSpinFlowerDownFall();
    updateNerveDownFall(char const*, float, float, float, al::Nerve const*);
    exeJumpSpinGround();
    exeJumpSpinGroundDownFall();
    exeJumpTurn();
    exeJumpBack();
    exeHoveringJump2D();
    exeHovering2D();
    ~PlayerStateJump();
};
