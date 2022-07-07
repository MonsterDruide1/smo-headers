#pragma once

class PeachTrunk
{
public:
    PeachTrunk(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeReactionCap();
};
