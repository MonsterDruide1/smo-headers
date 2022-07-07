#pragma once

namespace al { 

class CollisionParts
{
public:
    CollisionParts(void*, void const*);
    calcInvMtxScale();
    getConnectedHost() const;
    initParts(sead::Matrix34<float> const&);
    resetAllMtx(sead::Matrix34<float> const&);
    updateBoundingSphereRange(sead::Vector3<float>);
    validateByUser();
    invalidateByUser();
    validateBySystem();
    invalidateBySystem();
    onJoinList();
    makeEqualScale(sead::Matrix34<float>*);
    resetAllMtxPrivate(sead::Matrix34<float> const&);
    resetAllMtx();
    updateBoundingSphereRange();
    forceResetAllMtxAndSetUpdateMtxOneTime(sead::Matrix34<float> const&);
    forceResetAllMtxAndSetUpdateMtxOneTime();
    syncMtx(sead::Matrix34<float> const&);
    syncMtx();
    updateMtx();
    updateScale();
    updateBoundingSphereRangePrivate(float);
    checkBoundingSphereRange(sead::Vector3<float> const&, float);
    checkStrikePoint(al::HitInfo*, sead::Vector3<float> const&, al::TriangleFilterBase const*) const;
    checkStrikeSphere(al::SphereHitResultBuffer*, sead::Vector3<float> const&, float, bool, sead::Vector3<float> const&, al::TriangleFilterBase const*) const;
    checkStrikeSphereCore(al::SphereHitResultBuffer*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, float, al::TriangleFilterBase const*) const;
    checkStrikeArrow(al::ArrowHitResultBuffer*, sead::Vector3<float> const&, sead::Vector3<float> const&, al::TriangleFilterBase const*) const;
    checkStrikeSphereForPlayer(al::SphereHitResultBuffer*, sead::Vector3<float> const&, float, al::TriangleFilterBase const*) const;
    checkStrikeSphereForPlayerCore(al::SphereHitResultBuffer*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, float, al::TriangleFilterBase const*) const;
    checkStrikeDisk(al::DiskHitResultBuffer*, sead::Vector3<float> const&, float, float, sead::Vector3<float> const&, al::TriangleFilterBase const*) const;
    checkStrikeDiskCore(al::DiskHitResultBuffer*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, float, float, sead::Vector3<float> const&, al::TriangleFilterBase const*) const;
    calcForceMovePower(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    calcForceRotatePower(sead::Quat<float>*) const;
};

} 
