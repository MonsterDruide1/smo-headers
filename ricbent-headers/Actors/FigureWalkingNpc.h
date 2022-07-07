#pragma once

class FigureWalkingNpc
{
public:
    FigureWalkingNpc(char const*);
    init(al::ActorInitInfo const&);
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveEvent(al::EventFlowEventData const*);
    judgeQuery(char const*) const;
    exeEvent();
    exeEventScare();
    exeReaction();
};
