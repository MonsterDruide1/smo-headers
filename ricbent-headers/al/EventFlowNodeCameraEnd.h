#pragma once

namespace al { 

class EventFlowNodeCameraEnd
{
public:
    EventFlowNodeCameraEnd(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
};

} 
