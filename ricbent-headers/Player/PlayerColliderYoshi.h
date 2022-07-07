#pragma once

class PlayerColliderYoshi
{
public:
    PlayerColliderYoshi(al::LiveActor*);
    init();
    tryChangeCollisionNormal();
    updateCollider(sead::Vector3<float> const&);
    updateHeightCheck(sead::Vector3<float> const&, sead::Vector3<float> const&);
    updateCeilingCheck(sead::Vector3<float> const&, sead::Vector3<float> const&, float);
    tryChangeCollisionTongueJump();
    isEnableStandUp() const;
    isEnableHoldUp() const;
    isPressedCeil() const;
    getSafetyCeilSpace() const;
    getCeilCheckHeight() const;
    getPlayerCollider() const;
    isAboveGround() const;
    getGroundHeight() const;
    getShadowDropHeight() const;
};
