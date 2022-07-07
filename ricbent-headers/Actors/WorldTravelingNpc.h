#pragma once

class WorldTravelingNpc
{
public:
    WorldTravelingNpc(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveEvent(al::EventFlowEventData const*);
    exeEvent();
};
