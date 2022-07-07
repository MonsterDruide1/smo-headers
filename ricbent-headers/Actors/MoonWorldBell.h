#pragma once

class MoonWorldBell
{
public:
    MoonWorldBell(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeCapReaction();
    exeHipDropReaction();
};
