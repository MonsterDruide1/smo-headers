#pragma once

class SphinxRideEvent
{
public:
    SphinxRideEvent(SphinxRide*);
    init(al::ActorInitInfo const&);
    exeCheckInArea();
    exeEventPyramid();
    exeEventSphinxStone();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveEvent(al::EventFlowEventData const*);
    judgeQuery(char const*) const;
};
