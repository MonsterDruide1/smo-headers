#pragma once

namespace al { 

class EventFlowNodeDemoPlayerAction
{
public:
    EventFlowNodeDemoPlayerAction(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
};

} 
