#pragma once

namespace al { 

class EventFlowNodeDemoCamera
{
public:
    EventFlowNodeDemoCamera(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
};

} 
