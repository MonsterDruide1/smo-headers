#pragma once

class DoorWarpLock
{
public:
    DoorWarpLock(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    unlock();
    exeLock();
    exeUnlock();
    exeReaction();
};
