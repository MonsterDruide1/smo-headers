#pragma once

namespace al { 

class CameraTargetCollideInfoHolder
{
public:
    CameraTargetCollideInfoHolder();
    update(bool, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
    reset();
    isExistUnderWall() const;
    tryCalcSlopeDownFrontDirH(sead::Vector3<float>*) const;
    getCollisionDirector() const;
};

} 
