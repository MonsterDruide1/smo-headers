#pragma once

class BossKnuckleFix
{
public:
    BossKnuckleFix(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeReaction();
    exeReactionLarge();
};
