#pragma once

namespace al { 

class FixMapParts
{
public:
    FixMapParts(char const*);
    init(al::ActorInitInfo const&);
    appear();
    movement();
    calcAnim();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};

} 
