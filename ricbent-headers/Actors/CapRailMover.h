#pragma once

class CapRailMover
{
public:
    CapRailMover(char const*);
    init(al::ActorInitInfo const&);
    exeWait();
    exeLockOn();
    moveRailLockOn();
    exeGoal();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    startClipped();
    endClipped();
};
