#pragma once

class EchoBlockMapParts
{
public:
    EchoBlockMapParts(char const*);
    init(al::ActorInitInfo const&);
    begin();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
