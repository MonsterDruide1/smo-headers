#pragma once

class DoorWarp
{
public:
    DoorWarp(char const*);
    init(al::ActorInitInfo const&);
    unlock();
    initAfterPlacement();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    cancelBind();
    controlTransfer(DoorWarpPuppetController*);
    tryStartExitCamera();
    exeLock();
    exeUnlock();
    exeWait();
    exeMoveToFront();
    exeOpenIn();
    exeCloseIn();
    exeWaitCameraInterpolate();
    exeAppear();
    exeWaitOut();
    exeOpenOut();
    exeCloseOut();
    exeDisappear();
};
