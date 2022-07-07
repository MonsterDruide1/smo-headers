#pragma once

namespace al { 

class SlideMapParts
{
public:
    SlideMapParts(char const*);
    init(al::ActorInitInfo const&);
    start();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeStandBy();
    exeDelay();
    exeWait();
    exeMove();
    calcMoveTime() const;
};

} 
