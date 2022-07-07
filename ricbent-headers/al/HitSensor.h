#pragma once

namespace al { 

class HitSensor
{
public:
    trySensorSort();
    setFollowPosPtr(sead::Vector3<float> const*);
    setFollowMtxPtr(sead::Matrix34<float> const*);
    validate();
    invalidate();
    validateBySystem();
    invalidateBySystem();
    HitSensor(al::LiveActor*, char const*, unsigned int, float, unsigned short, sead::Vector3<float> const*, sead::Matrix34<float> const*, sead::Vector3<float> const&);
    update();
    addHitSensor(al::HitSensor*);
};

} 
