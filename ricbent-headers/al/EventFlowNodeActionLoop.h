#pragma once

namespace al { 

class EventFlowNodeActionLoop
{
public:
    EventFlowNodeActionLoop(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
};

} 
