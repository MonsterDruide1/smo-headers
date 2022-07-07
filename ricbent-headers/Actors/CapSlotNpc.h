#pragma once

class CapSlotNpc
{
public:
    CapSlotNpc(char const*, IItemExistanceJudge const*);
    init(al::ActorInitInfo const&);
    movement();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveEvent(al::EventFlowEventData const*);
    judgeQuery(char const*) const;
    exeWait();
    exeReaction();
};
