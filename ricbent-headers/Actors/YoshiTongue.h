#pragma once

class YoshiTongue
{
public:
    YoshiTongue(al::LiveActor const*, al::LiveActor const*, IUsePlayerCollision const*, PlayerWallActionHistory const*, PlayerEyeSensorHitHolder const*, PlayerConst const*, IUsePlayerHack**, char const*);
    init(al::ActorInitInfo const&);
    updateCollider();
    updateEatBindActor();
    calcAnim();
    startAttack(sead::Vector3<float> const&, sead::Vector3<float> const&);
    startShrink();
    endShrink();
    eatFinish();
    endHack();
    isEnableStartAttack() const;
    isEnableLookAtTip() const;
    isEnableShrinkStart() const;
    isEnableEatFinish() const;
    isExistEatBind() const;
    isShrinkMove() const;
    isConnectWall() const;
    isConnectGround() const;
    calcYoshiFaceDir(sead::Vector3<float>*) const;
    calcTongueTipPos(sead::Vector3<float>*) const;
    tryCalcTonguePullForce(float*, sead::Vector3<float>*) const;
    tryCalcTonguePullDistance(sead::Vector3<float>*) const;
    tryCalcTongueConnect(al::CollisionParts const**, sead::Vector3<float>*, sead::Vector3<float>*, sead::Vector3<float>*, sead::Vector3<float>*) const;
    getShrinkRestRange() const;
    adjustShrinkRestRange(float);
    exeStretch();
    getTongueParamSpeed() const;
    getTongueParamRange() const;
    reactionCollideWall();
    reactionCollideGround();
    returnOrEatHide();
    exeStay();
    exeHit();
    exeClingWall();
    exeClingGround();
    exeShrink();
    exeReturn();
    exeEat();
    exeHide();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isEnableStayClingGround() const;
};
