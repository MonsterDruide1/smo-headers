#pragma once

class TokimekiMayorNpc
{
public:
    TokimekiMayorNpc(char const*);
    init(al::ActorInitInfo const&);
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveEvent(al::EventFlowEventData const*);
    attackSensor(al::HitSensor*, al::HitSensor*);
    exeWait();
    exeReaction();
};
