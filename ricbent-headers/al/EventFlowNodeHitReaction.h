#pragma once

namespace al { 

class EventFlowNodeHitReaction
{
public:
    EventFlowNodeHitReaction(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
};

} 
