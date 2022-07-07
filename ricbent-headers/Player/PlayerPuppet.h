#pragma once

class PlayerPuppet
{
public:
    PlayerPuppet(al::LiveActor*, HackCap*, PlayerAnimator*, IUsePlayerCollision*, ActorDimensionKeeper*, IPlayerModelChanger*, WorldEndBorderKeeper*, PlayerCounterForceRun*, PlayerDamageKeeper*, PlayerEffect*, PlayerInput const*, PlayerConst const*);
    start(al::HitSensor*, al::HitSensor*);
    end();
    cancel();
    setTrans(sead::Vector3<float> const&);
    setPose(sead::Quat<float> const&);
    setVelocity(sead::Vector3<float> const&);
    resetPosition(sead::Vector3<float> const&);
    getTrans() const;
    getVelocity() const;
    getGravity() const;
    calcFront(sead::Vector3<float>*) const;
    calcUp(sead::Vector3<float>*) const;
    startAction(sead::SafeStringBase<char> const&) const;
    isActionEnd() const;
    isActionPlaying(char const*) const;
    setAnimRate(float) const;
    getAnimFrameMax() const;
    startPlayerHitReaction(char const*);
    hide();
    show();
    isHidden() const;
    hideSilhouette();
    showSilhouette();
    hideShadow();
    showShadow();
    validateCollisionCheck();
    invalidateCollisionCheck();
    isValidCollisionCheck();
    isCollidedGround();
    getCollidedGroundNormal();
    requestDamage();
    setBindEndJump(sead::Vector3<float> const&, int);
    setBindEndWallJump(sead::Vector3<float> const&, int);
    validate2D();
    keepOn2D();
    endKeepOn2D();
    requestUpdateRecoveryInfo(bool, bool, sead::Vector3<float> const&, sead::Vector3<float> const&, al::AreaObj const*);
    tryUpdateRecoveryInfo(bool*, bool*, sead::Vector3<float>*, sead::Vector3<float>*, al::AreaObj const**);
    isBinding() const;
    isNoCollide() const;
    clearRequestDamage();
    isRequestDamage() const;
    setBindEndOnGround();
    isBindEndOnGround() const;
    isBindEndJump() const;
    validateSensor();
    invalidateSensor();
};
