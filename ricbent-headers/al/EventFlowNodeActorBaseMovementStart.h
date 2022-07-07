#pragma once

namespace al { 

class EventFlowNodeActorBaseMovementStart
{
public:
    EventFlowNodeActorBaseMovementStart(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
};

} 
