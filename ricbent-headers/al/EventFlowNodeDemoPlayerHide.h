#pragma once

namespace al { 

class EventFlowNodeDemoPlayerHide
{
public:
    EventFlowNodeDemoPlayerHide(char const*);
    init(al::EventFlowNodeInitInfo const&);
    control();
};

} 
