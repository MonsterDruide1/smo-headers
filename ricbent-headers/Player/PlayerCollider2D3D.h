#pragma once

class PlayerCollider2D3D
{
public:
    PlayerCollider2D3D(al::LiveActor*, PlayerConst const*, PlayerCollider*, PlayerColliderDisk*);
    setFlag2D(bool);
    updateCollider(sead::Vector3<float> const&);
    updateHeightCheck(sead::Vector3<float> const&, sead::Vector3<float> const&);
    updateCeilingCheck(sead::Vector3<float> const&, sead::Vector3<float> const&);
    updateFallDistanceCheck(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, float);
    changeCollisionMini();
    changeCollisionNormal();
    changeCollisionWallGrab();
    getColliderRadius() const;
    getColliderDiskHalfHeight() const;
    calcDiskColliderBoundingCenter(sead::Vector3<float>*) const;
    getPlayerCollider() const;
    isEnableStandUp() const;
    isEnableHoldUp() const;
    isPressedCeil() const;
    isAboveGround() const;
    getGroundHeight() const;
    getFallDistance() const;
};
