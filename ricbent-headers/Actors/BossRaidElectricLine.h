#pragma once

class BossRaidElectricLine
{
public:
    BossRaidElectricLine(char const*);
    setBulletList(al::DeriveActorGroup<BossRaidElectric>*);
    init(al::ActorInitInfo const&);
    shot(sead::Vector3<float> const&, sead::Vector3<float> const&);
    exeMove();
    killForce();
};
