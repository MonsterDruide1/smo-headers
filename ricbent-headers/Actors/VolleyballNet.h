#pragma once

class VolleyballNet
{
public:
    VolleyballNet(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeReaction();
};
