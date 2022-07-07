#pragma once

class Fukankun
{
public:
    Fukankun(char const*);
    init(al::ActorInitInfo const&);
    switchStart();
    switchAppear();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    cleanupCaptureView();
    turnHeadToDir(sead::Vector3<float> const&, float);
    endCaptureAndNextNerve();
    exeStandby();
    exeRecoverWait();
    exeWait();
    exeCaptureWait();
    exeCaptureStart();
    exeCaptureDemo();
    calcTargetYUp();
    updateCamera(sead::Vector3<float> const&, float, float);
    exeCaptureStartEnd();
    exeCaptureViewWait();
    setupBalloon();
    exeCaptureView();
    exeCaptureEnd();
    exeJoin();
    exeReaction();
};
