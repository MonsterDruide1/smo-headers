#pragma once

class SandGeyser
{
public:
    SandGeyser(char const*);
    init(al::ActorInitInfo const&);
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    startPlaceTypeAction(char const*);
    exeUpStart();
    exeUpLoop();
    exeUpWait();
    exeUpEnd();
    exeUpEndWait();
};
