#pragma once

class ElectricWireTarget
{
public:
    ElectricWireTarget(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
