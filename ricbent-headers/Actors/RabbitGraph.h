#pragma once

class RabbitGraph
{
public:
    RabbitGraph(char const*);
    init(al::ActorInitInfo const&);
    tryCreateRabbitGraphLinks(al::LiveActor**, al::LiveActor*, al::ActorInitInfo const&, char const*, int, bool);
    initAfterPlacement();
    exeStandby();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
};
