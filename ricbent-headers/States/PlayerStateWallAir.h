#pragma once

class PlayerStateWallAir
{
public:
    PlayerStateWallAir(al::LiveActor*, PlayerConst const*, PlayerInput const*, PlayerTrigger const*, IUsePlayerCollision*, IJudge*, PlayerJudgePreInputJump*, PlayerAnimator*, PlayerWallActionHistory*, PlayerActionDiveInWater*);
    appear();
    isAir() const;
    isJustJump() const;
    isEnableReactionCapCatch() const;
    startSlideSpinAttack();
    calcSnapMoveCutDir(sead::Vector3<float>*) const;
    exeSlide();
    exeJump();
    ~PlayerStateWallAir();
};
