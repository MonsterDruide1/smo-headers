#pragma once

namespace al { 

class GravityHolder
{
public:
    GravityHolder();
    init();
    createGravity(al::PlacementInfo const&);
    tryCalcGravity(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    tryCalcBlendGravity(sead::Vector3<float>*, sead::Vector3<float> const&) const;
};

} 
