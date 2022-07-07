#pragma once

class BossForestSatelliteHolder
{
public:
    BossForestSatelliteHolder(BossForest*);
    init(al::ActorInitInfo const&);
    findSatellite(int, int) const;
    makeActorDead();
};
