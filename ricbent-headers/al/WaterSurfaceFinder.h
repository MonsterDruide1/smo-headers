#pragma once

namespace al { 

class WaterSurfaceFinder
{
public:
    WaterSurfaceFinder(al::LiveActor const*);
    update(sead::Vector3<float> const&, sead::Vector3<float> const&, float);
    updateLocal(sead::Vector3<float> const&, sead::Vector3<float> const&, float, bool, bool, bool);
    updateForSurfaceShadow(sead::Vector3<float> const&, sead::Vector3<float> const&, float);
    updateForDisplacement(sead::Vector3<float> const&, sead::Vector3<float> const&, float);
    updateConsiderGround(sead::Vector3<float> const&, sead::Vector3<float> const&, float);
    isNearSurface(float) const;
};

} 
