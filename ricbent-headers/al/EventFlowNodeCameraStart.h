#pragma once

namespace al { 

class EventFlowNodeCameraStart
{
public:
    EventFlowNodeCameraStart(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
};

} 
