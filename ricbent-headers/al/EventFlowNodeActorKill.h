#pragma once

namespace al { 

class EventFlowNodeActorKill
{
public:
    EventFlowNodeActorKill(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
};

} 
