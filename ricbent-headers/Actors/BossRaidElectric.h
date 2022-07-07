#pragma once

class BossRaidElectric
{
public:
    BossRaidElectric(char const*);
    makeActorDead();
    setPrevBullet(BossRaidElectric*);
    setNextBullet(BossRaidElectric*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    shot(sead::Vector3<float> const&, sead::Vector3<float> const&, BossRaidElectric*, al::DeriveActorGroup<BossRaidElectric>*);
    updatePosition();
    exeWait();
    updateAnimAndJoint();
    isAirAll() const;
    exeDisappear();
    exeHide();
    isHideAll() const;
    isHide() const;
    updateEffectScale(float);
    calcNearPos(sead::Vector3<float>*, sead::Vector3<float> const&) const;
};
