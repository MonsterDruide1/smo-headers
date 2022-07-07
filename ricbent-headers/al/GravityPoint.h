#pragma once

namespace al { 

class GravityPoint
{
public:
    GravityPoint();
    initWithPlacementInfo(al::PlacementInfo const&);
    tryCalcGravity(sead::Vector3<float>*, sead::Vector3<float> const&) const;
};

} 
