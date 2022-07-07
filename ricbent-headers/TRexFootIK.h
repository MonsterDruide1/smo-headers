#pragma once

class TRexFootIK
{
public:
    TRexFootIK(al::LiveActor const*, al::HitSensor*, TRexFootIKInfo const&);
    update();
    isInvalid() const;
    invalidate();
    validate();
    calcJointCallback(int, sead::Matrix34<float>*);
    calcConstraint(sead::Matrix34<float> const*);
    updateRoot(sead::Matrix34<float>*);
    updateMiddle(sead::Matrix34<float>*);
    updateLast(sead::Matrix34<float>*);
    isCollidedGround() const;
    isCollidedGroundVelocity() const;
    isCollidedGroundJumpCode() const;
    isCollidedWall() const;
    getCollidedGroundNormal() const;
    getCollidedWallNormal() const;
    tryGetLandingCollisionMaterialCode() const;
    checkEnableJumpOverLowWall() const;
    exeInvalid();
    exeStart();
    exeWait();
    getCtrlTypeName() const;
    getNerveKeeper() const;
    getCollisionDirector() const;
};
