#pragma once

namespace al { 

class KeyMoveMapParts
{
public:
    KeyMoveMapParts(char const*);
    init(al::ActorInitInfo const&);
    start();
    stop();
    appearAndSetStart();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    appearAndSetEnd();
    exeStandBy();
    exeDelay();
    exeWait();
    setWaitEndNerve();
    exeMoveSign();
    exeMove();
    exeStopSign();
    exeStop();
};

} 
