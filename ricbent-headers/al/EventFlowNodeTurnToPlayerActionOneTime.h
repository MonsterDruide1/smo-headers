#pragma once

namespace al { 

class EventFlowNodeTurnToPlayerActionOneTime
{
public:
    EventFlowNodeTurnToPlayerActionOneTime(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
};

} 
