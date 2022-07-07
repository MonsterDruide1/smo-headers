#pragma once

class PlayerCollider
{
public:
    PlayerCollider(al::CollisionDirector*, sead::Matrix34<float> const*, sead::Vector3<float> const*, sead::Vector3<float> const*, bool);
    onInvalidate();
    setCollisionShapeKeeper(CollisionShapeKeeper*);
    calcBoundingRadius(float*) const;
    setCollisionShapeScale(float);
    onCutCollideAffectDir(sead::Vector3<float> const&);
    offCutCollideAffectDir();
    clear();
    calcCheckPos(sead::Vector3<float>*) const;
    resetPose(sead::Quat<float> const&);
    collide(sead::Vector3<float> const&);
    calcMovePowerByContact(sead::Vector3<float>*, sead::Vector3<float> const&);
    moveCollide(sead::Vector3<float>*, float*, sead::Quat<float>*, sead::Vector3<float> const&, float, sead::Quat<float> const&, sead::Vector3<float> const&, float, bool);
    findCollidePos(al::SpherePoseInterpolator*);
    calcResultVec(sead::Vector3<float>*, sead::Vector3<float>*, sead::Vector3<float> const&);
    calcGroundArrowAverage(bool*, sead::Vector3<float>*, bool*, sead::Vector3<float>*, CollisionShapeKeeper const*);
    calcResultVecArrow(sead::BitFlag<unsigned int>*, sead::Vector3<float>*, sead::Vector3<float>*, sead::Vector3<float>*, sead::Vector3<float>*, CollidedShapeResult const*);
    calcResultVecSphere(sead::BitFlag<unsigned int>*, sead::Vector3<float>*, sead::Vector3<float>*, sead::Vector3<float>*, sead::Vector3<float>*, CollidedShapeResult const*);
    calcResultVecDisk(sead::BitFlag<unsigned int>*, sead::Vector3<float>*, sead::Vector3<float>*, sead::Vector3<float>*, sead::Vector3<float>*, CollidedShapeResult const*);
    collectHitInfoArray(al::HitInfo const&, int);
    isNeedWallBorderCheck(al::HitInfo const&) const;
    setWallBorderCheckTypeNone();
    setWallBorderCheckTypeNoFace();
    setWallBorderCheckTypeAll();
    setCollisionPartsFilter(al::CollisionPartsFilterBase const*);
    calcBoundingCenter(sead::Vector3<float>*) const;
    validateCorrectMovePartsCheck();
    getCollisionDirector() const;
};
