#pragma once

namespace al { 

class RippleFixMapParts
{
public:
    RippleFixMapParts(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    appear();
    control();
    movement();
    calcAnim();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};

} 
