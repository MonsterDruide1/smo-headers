#pragma once

namespace al { 

class ClockMapParts
{
public:
    ClockMapParts(char const*);
    init(al::ActorInitInfo const&);
    start();
    standBy();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    appearAndSetStart();
    setRestartNerve();
    control();
    setRotateStartNerve();
    exeStandBy();
    exeDelay();
    exeRotateSign();
    exeRotate();
    exeWait();
    exeAssistStop();
    exeAssistStopSync();
    exeAssistStopEndWait();
};

} 
