#pragma once

namespace al { 

class EventFlowNodeTurnToPlayer
{
public:
    EventFlowNodeTurnToPlayer(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
};

} 
