#pragma once

namespace al { 

class WobbleMapParts
{
public:
    WobbleMapParts(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    appearAndSetStart();
    exeWait();
    updateMove();
    exeMove();
    exeAssistStop();
};

} 
