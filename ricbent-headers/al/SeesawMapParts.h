#pragma once

namespace al { 

class SeesawMapParts
{
public:
    SeesawMapParts(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    appearAndSetStart();
    exeWait();
};

} 
