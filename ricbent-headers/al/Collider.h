#pragma once

namespace al { 

class Collider
{
public:
    Collider(al::CollisionDirector*, sead::Matrix34<float> const*, sead::Vector3<float> const*, sead::Vector3<float> const*, float, float, unsigned int);
    clear();
    setTriangleFilter(al::TriangleFilterBase const*);
    setCollisionPartsFilter(al::CollisionPartsFilterBase const*);
    updateRecentOnGroundInfo();
    clearStoredPlaneNum();
    clearContactPlane();
    onInvalidate();
    calcCheckPos(sead::Vector3<float>*) const;
    getRecentOnGroundNormal(unsigned int) const;
    getPlane(int) const;
    calcMovePowerByContact(sead::Vector3<float>*, sead::Vector3<float> const&);
    storeCurrentHitInfo(al::SphereHitInfo*, unsigned int);
    obtainMomentFixReaction(al::SphereHitInfo*, sead::Vector3<float>*, sead::Vector3<float>*, bool, unsigned int);
    storeContactPlane(al::SphereHitInfo*);
    collide(sead::Vector3<float> const&);
    preCollide(al::SphereInterpolator*, sead::Vector3<float>*, float*, sead::Vector3<float> const&, al::SphereHitInfo*, unsigned int);
    findCollidePos(int*, al::SphereInterpolator*, al::SphereHitInfo*, unsigned int);
    getCollisionDirector() const;
};

} 
