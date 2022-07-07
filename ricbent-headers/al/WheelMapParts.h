#pragma once

namespace al { 

class WheelMapParts
{
public:
    WheelMapParts(char const*);
    init(al::ActorInitInfo const&);
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    appearAndSetStart();
    exeWait();
    exeMove();
    exeAssistStop();
};

} 
