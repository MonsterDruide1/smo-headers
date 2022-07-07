#pragma once

namespace al { 

class SwingMapParts
{
public:
    SwingMapParts(char const*);
    init(al::ActorInitInfo const&);
    start();
    initAfterPlacement();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    exeStandBy();
    exeMoveRight();
    exeMoveLeft();
    exeStop();
};

} 
