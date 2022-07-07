#pragma once

namespace al { 

class EventFlowExecutor
{
public:
    EventFlowExecutor();
    init(al::LiveActor*, al::EventFlowChart*, al::EventFlowDataHolder*);
    initMovement(al::EventFlowMovement*);
    initScareCtrl(al::EventFlowScareCtrlBase*);
    initAfterPlacement();
    start(char const*);
    execute();
    attackSensor(al::HitSensor*, al::HitSensor*);
    stopMovement();
    restartMovement();
    isExistEntry(char const*) const;
    isWaitAtPointMovement() const;
    getEventFlowDataHolder() const;
};

} 
