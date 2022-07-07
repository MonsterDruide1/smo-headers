#pragma once

namespace al { 

class FlowMapParts
{
public:
    FlowMapParts(char const*);
    init(al::ActorInitInfo const&);
    appear();
    movement();
    calcAnim();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};

} 
