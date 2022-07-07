#pragma once

namespace al { 

class ChildStep
{
public:
    ChildStep(char const*, al::LiveActor*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
};

} 
