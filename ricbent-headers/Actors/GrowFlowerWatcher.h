#pragma once

class GrowFlowerWatcher
{
public:
    GrowFlowerWatcher(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
};
