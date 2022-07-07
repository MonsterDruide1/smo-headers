#pragma once

namespace al { 

class EventFlowNodeDemoPlayerShow
{
public:
    EventFlowNodeDemoPlayerShow(char const*);
    init(al::EventFlowNodeInitInfo const&);
    control();
};

} 
