#pragma once

class PlayerEffect
{
public:
    PlayerEffect(al::LiveActor*, PlayerModelHolder const*, sead::Matrix34<float> const*);
    emitEffectWaterInOut(sead::Matrix34<float> const&, bool);
    updateWaterSurfaceMtx(al::WaterSurfaceFinder const*);
    tryEmitInvincibleEffect();
    suspendInvincibleEffect();
    tryDeleteInvincibleEffect();
    restartInvincibleEffect();
    updateInvincibleEffect(IPlayerModelChanger const*, bool);
    clearRunEffect();
    isRunEffectDashFast() const;
    tryStartRunEffectRunStart();
    tryStartRunEffectRun();
    tryStartRunEffectDash();
    tryStartRunEffectDashFast();
    tryStartRunEffectDashWaterSurface();
    tryEmitRollingEffect();
    tryDeleteRollingEffect();
    clearStainEffect();
    tryDeleteWetEffect();
    tryDeleteStainPoisonEffect();
    tryDeleteStainFireEffect();
    tryDeleteStainIceEffect();
    tryEmitWetEffect();
    tryEmitStainPoisonEffect();
    tryEmitStainFireEffect();
    tryEmitStainIceEffect();
    tryEmitSandSinkEffect(sead::Vector3<float> const&, sead::Vector3<float> const&, bool);
    tryDeleteSandSinkEffect();
    tryDeleteDamageFireRunEffect();
};
