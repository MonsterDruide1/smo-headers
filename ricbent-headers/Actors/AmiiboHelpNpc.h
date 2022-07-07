#pragma once

class AmiiboHelpNpc
{
public:
    AmiiboHelpNpc(char const*);
    init(al::ActorInitInfo const&);
    receiveEvent(al::EventFlowEventData const*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    attackSensor(al::HitSensor*, al::HitSensor*);
    control();
    exeWait();
    exeScare();
    exeReaction();
    exeExplain();
};
