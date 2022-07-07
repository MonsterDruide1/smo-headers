#pragma once

class BossRaidLightning
{
public:
    BossRaidLightning(char const*);
    init(al::ActorInitInfo const&);
    setBulletList(al::DeriveActorGroup<BossRaidElectric>*);
    exeSign();
    exeFall();
    exeLand();
    shotBullet();
    killForce();
    shot(sead::Vector3<float> const&, bool, float);
};
