#pragma once

class SpaceShuttle
{
public:
    SpaceShuttle(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    endCapture();
    control();
    exeWait();
    exeCaptureWait();
    exeCaptureStart();
    exeCaptureStartEnd();
    exeCaptureLiftOff();
    exeCaptureFall();
    exeCaptureLand();
    exeReset();
};
