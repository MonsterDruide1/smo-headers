#pragma once

namespace al { 

class EventFlowRequestInfo
{
public:
    EventFlowRequestInfo();
    reset();
    requestDemoAction(char const*);
    requestDemoCamera(char const*);
};

} 
