#pragma once

class ShineTowerKey
{
public:
    ShineTowerKey(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
};
