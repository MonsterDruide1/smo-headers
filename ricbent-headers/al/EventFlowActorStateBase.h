#pragma once

namespace al { 

class EventFlowActorStateBase
{
public:
    EventFlowActorStateBase(char const*, al::EventFlowMovement*);
    getActor() const;
    getEventFlowDataHolder() const;
    ~EventFlowActorStateBase();
};

} 
