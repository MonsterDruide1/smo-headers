#pragma once

namespace al { 

class EventFlowNodeSwitchOn
{
public:
    EventFlowNodeSwitchOn(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
};

} 
