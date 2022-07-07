#pragma once

class PlayerColliderHakoniwa
{
public:
    PlayerColliderHakoniwa(al::LiveActor*, PlayerConst const*);
    init();
    updateCollider(sead::Vector3<float> const&);
    updateHeightCheck(sead::Vector3<float> const&, sead::Vector3<float> const&, bool);
    updateCeilingCheck(sead::Vector3<float> const&, sead::Vector3<float> const&, float, float);
    updateFallDistanceCheck(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, float);
    changeCollisionNormal();
    changeCollisionMini();
    changeCollisionSwim();
    changeCollisionWallGrab(sead::Vector3<float> const&);
    changeCollisionGrabCeil(sead::Vector3<float> const&);
    changeCollisionPoleClimb(sead::Vector3<float> const&);
    changeCollision2DNormal();
    changeCollision2DMini();
    changeCollisionHack(al::CollisionPartsFilterBase const*);
    changeCollisionRecovery(bool);
    changeCollisionAbyss(sead::Vector3<float> const&);
    prepareCollisionEndHack();
    prepareCollisionEndRecovery();
    getColliderRadius() const;
    getColliderDiskHalfHeight() const;
    calcBoundingCenter(sead::Vector3<float>*) const;
    calcSeparateCapLocalOffset(sead::Vector3<float>*) const;
    validateGroundSupport();
    invalidateGroundSupport();
    isEnableStandUp() const;
    isEnableHoldUp() const;
    isPressedCeil() const;
    getSafetyCeilSpace() const;
    getCeilCheckHeight() const;
    getPlayerCollider() const;
    isAboveGround() const;
    getGroundHeight() const;
    getShadowDropHeight() const;
    getFallDistance() const;
};
