#pragma once

namespace al { 

class EventFlowNodeDemoAction
{
public:
    EventFlowNodeDemoAction(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
};

} 
