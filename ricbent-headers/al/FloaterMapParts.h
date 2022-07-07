#pragma once

namespace al { 

class FloaterMapParts
{
public:
    FloaterMapParts(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    appearAndSetStart();
    control();
    exeWait();
    exeSink();
    exeBack();
};

} 
