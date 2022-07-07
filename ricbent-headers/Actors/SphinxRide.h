#pragma once

class SphinxRide
{
public:
    SphinxRide(char const*);
    init(al::ActorInitInfo const&);
    updateJointPose();
    initAfterPlacement();
    movement();
    control();
    requestGetOffForce();
    receiveEvent(al::EventFlowEventData const*);
    judgeQuery(char const*) const;
    updateCollider();
    calcAnim();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    disappear();
    isCanRidePlacement();
    startClipped();
    exeWait();
    exeStandby();
    setNerveFall();
    trySlipOnMoveLimit();
    exeReaction();
    exeDemoStandbyStart();
    exeDemoStandbyTurnZero();
    exeDemoTurnEnd();
    exeGetOnStart();
    exeGetOnStartOn();
    exeGetOn();
    isValidateCameraAngleV(float);
    exeRun();
    tryGetOffAndCancelBind();
    updateRun(float);
    exeClash();
    updateGravityAndDump(float, float);
    exeStop();
    sendMsgCollidedCactus();
    exeFall();
    controlAndRotateYAndMove(float, float, bool);
    exeLand();
    exeGetOff();
    exeJump();
    exeRevival();
    exeEventWait();
    isRidePlayer() const;
    isPlayerInputSwingSphinxStop() const;
    sendMsgCollidedTouch();
    calcCheckCollidedWallCommon(sead::Vector3<float>*, sead::Vector3<float>*, al::HitSensor**, al::HitSensor**);
    startStandby(sead::Vector3<float> const&, sead::Vector3<float> const&);
    isNerveStandby() const;
    setupEventFade();
    startEventWait();
    endEventWait(float);
};
