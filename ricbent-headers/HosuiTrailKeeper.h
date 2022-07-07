#pragma once

class HosuiTrailKeeper
{
public:
    HosuiTrailKeeper(al::ActorInitInfo const&);
    appearTrail(sead::Vector3<float> const&, sead::Vector3<float> const&);
    forceKillAll();
    ~HosuiTrailKeeper();
};
