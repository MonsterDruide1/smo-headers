#pragma once

class PlayerRecoverySafetyPoint
{
public:
    PlayerRecoverySafetyPoint(al::LiveActor const*, HackCap const*, al::ActorInitInfo const&, IUseDimension const*, al::CollisionPartsFilterBase*, al::HitSensor*);
    reset();
    setSafetyPoint(sead::Vector3<float> const&, sead::Vector3<float> const&, al::AreaObj const*);
    noticeRequestSafetyPoint(sead::Vector3<float> const&, sead::Vector3<float> const&, al::AreaObj const*);
    noticeDangerousPoint(sead::Vector3<float> const&, bool);
    slideLastSafetyPoint(sead::Vector3<float>*, sead::Vector3<float>*, bool, sead::Vector3<float> const&, bool, al::CollisionPartsFilterBase*);
    isValid() const;
    isEnableRecovery() const;
    getSafetyPoint() const;
    getSafetyPointGravity() const;
    getSafetyPointArea() const;
    updateRecoveryAreaValidity();
    setRecoveryArea(al::AreaObj const*);
    isActiveRecoveryArea() const;
    checkInvalidateArea();
    startRecovery(float);
    updateRecoveryBubble();
    startBubbleWait();
    endRecovery();
};
