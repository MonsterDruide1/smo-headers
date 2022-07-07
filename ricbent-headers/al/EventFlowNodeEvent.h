#pragma once

namespace al { 

class EventFlowNodeEvent
{
public:
    EventFlowNodeEvent(char const*);
    init(al::EventFlowNodeInitInfo const&);
    control();
};

} 
