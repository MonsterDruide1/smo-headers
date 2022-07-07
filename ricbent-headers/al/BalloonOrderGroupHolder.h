#pragma once

namespace al { 

class BalloonOrderGroupHolder
{
public:
    BalloonOrderGroupHolder();
    tryFindGroup(al::PlacementInfo const&) const;
    registerGroup(al::BalloonOrderGroup*);
    updateAll(sead::Vector3<float> const&);
    resetInsideTerritoryAll();
};

} 
