#pragma once

class RailDrawer
{
public:
    RailDrawer(char const*);
    init(al::ActorInitInfo const&);
    makeActorAlive();
    makeActorDead();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
};
