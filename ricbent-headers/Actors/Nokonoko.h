#pragma once

class Nokonoko
{
public:
    Nokonoko(char const*);
    init(al::ActorInitInfo const&);
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    endCapture();
    exeWait();
    exeSwoon();
    exeCaptureStart();
    exeCaptureStartEnd();
    exeCaptureEnd();
    exeCaptureWait();
    exeCaptureWalk();
    exeCaptureJumpStart();
    exeCaptureJump();
    exeCaptureJumpEnd();
    exeCaptureSpinStandbyStart();
    exeCaptureSpin();
    exeCaptureSpinEnd();
    exeDie();
};
