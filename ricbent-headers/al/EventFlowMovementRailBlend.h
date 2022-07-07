#pragma once

namespace al { 

class EventFlowMovementRailBlend
{
public:
    EventFlowMovementRailBlend(al::LiveActor*);
    init(al::ActorInitInfo const&);
    appear();
    control();
};

} 
