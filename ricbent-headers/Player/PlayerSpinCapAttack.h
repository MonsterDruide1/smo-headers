#pragma once

class PlayerSpinCapAttack
{
public:
    PlayerSpinCapAttack(HackCap*, PlayerConst const*, PlayerTrigger const*, PlayerInput const*, PlayerCounterAfterCapCatch const*, PlayerJudgePreInputCapThrow const*);
    clearAttackInfo();
    setupAttackInfo();
    startCapSpinAttack(PlayerAnimator*, PlayerInput const*);
    startCapSpinAttackAir(PlayerAnimator*, PlayerInput const*);
    startCapSpinAttackSwim(PlayerAnimator*, PlayerInput const*);
    startSpinSeparate(PlayerAnimator*);
    startSpinSeparateSwim(PlayerAnimator*);
    startSpinSeparateSwimSurface(PlayerAnimator*);
    startCapThrow(sead::Vector3<float> const&, sead::Vector3<float> const&, float, bool, sead::Vector3<float> const&);
    attackSpinMsg(al::HitSensor*, al::HitSensor*);
    tryCancelCapState(PlayerAnimator*);
    tryStartCapSpinGroundMiss(PlayerAnimator*);
    tryStartCapSpinAirMiss(PlayerAnimator*);
    isCapSpinAttack() const;
    isValidAttackSensor(PlayerAnimator const*) const;
    isEnablePlaySpinCapMiss(PlayerAnimator const*) const;
    isSeparateSingleSpin() const;
    isThrowSwingRightDir() const;
    getThrowFrameGround() const;
    getThrowFrameAir() const;
    getThrowFrameSwim() const;
};
