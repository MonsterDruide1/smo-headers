#pragma once

class VocalMike
{
public:
    VocalMike(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
