#pragma once

class YoshiStateHackPlay
{
public:
    YoshiStateHackPlay(al::ActorInitInfo const&, al::LiveActor*, al::LiveActor*, IUsePlayerHack**, PlayerConst const*, PlayerTrigger*, PlayerAnimator*, IUsePlayerCollision*, PlayerEffect*, PlayerJumpMessageRequest*);
    appear();
    setNerveOnGround();
    kill();
    update();
    executePreUpdateNerveChange();
    updatePrevMovement();
    updateAfterMovement();
    prepareEndHack();
    reactionCollidedCollisionCodeDamage() const;
    isActiveHeadCorrection() const;
    isCollisionShapeTongueJump() const;
    tryGetLookAtTonguePos(sead::Vector3<float>*) const;
    tryCalcTonguePullForce(float*, sead::Vector3<float>*) const;
    calcGroundPoseRate(float*, float*) const;
    startFruitShineGetDemo();
    exeWait();
    tryChangeNerveOnGround();
    exeJump();
    tryChangeNerveAir();
    exeFlap();
    exeWallAir();
    setNerveTongueShrink();
    exeWallPopUp();
    exeTongueShrink();
    exeFall();
    exeRun();
    exeDown();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    ~YoshiStateHackPlay();
};
