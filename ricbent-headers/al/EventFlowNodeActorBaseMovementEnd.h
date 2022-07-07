#pragma once

namespace al { 

class EventFlowNodeActorBaseMovementEnd
{
public:
    EventFlowNodeActorBaseMovementEnd(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
};

} 
