#pragma once

namespace al { 

class EventFlowNodeActionOneTime
{
public:
    EventFlowNodeActionOneTime(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
};

} 
