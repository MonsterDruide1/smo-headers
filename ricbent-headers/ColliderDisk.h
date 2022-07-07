#pragma once

class ColliderDisk
{
public:
    ColliderDisk(al::CollisionDirector*, sead::Matrix34<float> const*, sead::Vector3<float> const*, sead::Vector3<float> const*, float, float, sead::Vector3<float> const&, float);
    clear();
    setCollisionPartsFilter(al::CollisionPartsFilterBase const*);
    setTriangleFilter(al::TriangleFilterBase const*);
    onInvalidate();
    calcCheckPosAndDir(sead::Vector3<float>*, sead::Vector3<float>*) const;
    collide(sead::Vector3<float> const&);
    calcMovePowerByContact(sead::Vector3<float>*, sead::Vector3<float> const&);
    preCollide(al::DiskInterpolator*, sead::Vector3<float>*, float*, float*, sead::Matrix34<float>*, sead::Vector3<float> const&, al::DiskHitInfo*, unsigned int);
    findCollidePos(int*, al::DiskInterpolator*, al::DiskHitInfo*, unsigned int);
    obtainMomentFixReaction(al::DiskHitInfo*, sead::Vector3<float>*, sead::Vector3<float>*, unsigned int);
    storeContactPlane(al::HitInfo*);
    storeCurrentHitInfo(al::DiskHitInfo*, unsigned int);
    clearStoredPlaneNum();
    clearContactPlane();
    getCollisionDirector() const;
};
