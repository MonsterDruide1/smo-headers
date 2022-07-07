#pragma once

namespace al { 

class EventFlowNodeSwitchOff
{
public:
    EventFlowNodeSwitchOff(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
};

} 
