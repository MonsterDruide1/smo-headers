#pragma once

class MofumofuScrap
{
public:
    MofumofuScrap(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeReaction();
    exeReactionCap();
};
