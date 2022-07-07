#pragma once

class DoorWarpStageChange
{
public:
    DoorWarpStageChange(char const*);
    init(al::ActorInitInfo const&);
    unlock();
    initAfterPlacement();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeLock();
    exeUnlock();
    exeWait();
    exeMoveToFront();
    exeOpen();
    exeClose();
    exeAppear();
    exeWaitOut();
    exeOpenOut();
    exeCloseOut();
    exeDisappear();
};
