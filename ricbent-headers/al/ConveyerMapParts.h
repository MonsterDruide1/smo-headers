#pragma once

namespace al { 

class ConveyerMapParts
{
public:
    ConveyerMapParts(char const*);
    init(al::ActorInitInfo const&);
    start();
    stop();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    startClipped();
    endClipped();
    exeStandBy();
    exeMove();
};

} 
