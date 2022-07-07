#pragma once

namespace al { 

class RotateMapParts
{
public:
    RotateMapParts(char const*);
    init(al::ActorInitInfo const&);
    start();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    appearAndSetStart();
    exeStandBy();
    exeRotate();
    exeAssistStop();
};

} 
