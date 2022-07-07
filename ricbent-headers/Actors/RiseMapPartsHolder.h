#pragma once

class RiseMapPartsHolder
{
public:
    RiseMapPartsHolder(char const*);
    init(al::ActorInitInfo const&);
    startRise();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeMove();
    startRiseAllChild();
    exeMoveEnd();
    exeStop();
    exeRequestDemo();
    exeDelay();
    startDemo(bool);
};
