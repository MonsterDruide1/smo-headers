#pragma once

namespace al { 

class EventFlowNodeAnimCameraStart
{
public:
    EventFlowNodeAnimCameraStart(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
};

} 
