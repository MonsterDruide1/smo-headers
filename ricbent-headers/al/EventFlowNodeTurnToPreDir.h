#pragma once

namespace al { 

class EventFlowNodeTurnToPreDir
{
public:
    EventFlowNodeTurnToPreDir(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
};

} 
