#pragma once

namespace al { 

class EventFlowNodeCheckWaitSwitch
{
public:
    EventFlowNodeCheckWaitSwitch(char const*);
    init(al::EventFlowNodeInitInfo const&);
    control();
};

} 
