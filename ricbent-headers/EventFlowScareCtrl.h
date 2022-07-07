#pragma once

class EventFlowScareCtrl
{
public:
    EventFlowScareCtrl();
    init(al::LiveActor*, al::ActorInitInfo const&, al::EventFlowDataHolder*, char const*);
    isScare() const;
    tryGetScareEnemyPos(sead::Vector3<float>*) const;
    update();
    attackSensor(al::HitSensor*, al::HitSensor*);
    getScareMessage() const;
    exeWait();
    exeScare();
    exeScareAfter();
    getEventFlowDataHolder() const;
    getNerveKeeper() const;
};
