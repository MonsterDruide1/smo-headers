#pragma once

class PlayerStainControl
{
public:
    PlayerStainControl(al::LiveActor const*, al::LiveActor*, PlayerModelChangerHakoniwa const*, HackCap const*, PlayerEffect*);
    recordExplosion();
    recordDamageFire();
    recordDamageFireDead();
    recordBlackSmoke();
    recordPoison();
    recordIceWater();
    recordBlizzard();
    recordSandMove(char const*);
    isEnableLowPriorityStain() const;
    getSandType(char const*) const;
    recordSnowMove(char const*);
    recordSnowBySensor();
    recordSandHeavyLand(char const*);
    clearCurrentStain(bool);
    recordSandMoonBySensor();
    recordInWater();
    recordInWet();
    noticeStartHack();
    tryDeleteStainEffect(PlayerStainControl::StainType, float);
    noticeEndHack();
    clearStain();
    noticeMainShineGet();
    update();
    clearStainRequest();
    tryEmitStainEffect(PlayerStainControl::StainType);
    isEnableValidateStain() const;
    isEnableInvalidateStain() const;
    tryEmitClearStainEffect(PlayerStainControl::StainType, float);
};
