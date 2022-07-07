#pragma once

namespace al { 

class RailMoveMapParts
{
public:
    RailMoveMapParts(char const*);
    init(al::ActorInitInfo const&);
    start();
    stop();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    appearAndSetStart();
    exeStandBy();
    exeMoveSign();
    exeMove();
};

} 
