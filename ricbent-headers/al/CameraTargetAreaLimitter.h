#pragma once

namespace al { 

class CameraTargetAreaLimitter
{
public:
    tryCreate(al::PlacementInfo const&);
    CameraTargetAreaLimitter(al::AreaShape const*);
    applyAreaLimit(sead::Vector3<float>*, sead::Vector3<float> const&) const;
};

} 
