#pragma once

class ReactionMapParts
{
public:
    ReactionMapParts(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeReaction();
};
