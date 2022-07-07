#pragma once

class CornBoy
{
public:
    CornBoy(char const*);
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
    isEnableCharge() const;
    tryCharge();
    tryStartLaunch();
    exeCaptureWait();
    exeCaptureRun();
    exeCaptureAim();
    exeCaptureLaunchStart();
    exeCaptureLaunch();
    exeCaptureLaunchEnd();
    exeCaptureFall();
    exeCaptureLand();
    exeCaptureCoolDown();
    exeDie();
};
