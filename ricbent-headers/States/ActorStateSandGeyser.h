#pragma once

class ActorStateSandGeyser
{
public:
    ActorStateSandGeyser(al::LiveActor*);
    appear();
    kill();
    tryEndPadRumble();
    exeSandGeyser();
    tryStartPadRumble();
    receiveMsgSandGeyser(al::SensorMsg const*, al::HitSensor const*);
    ~ActorStateSandGeyser();
};
