#pragma once

namespace al { 

class EventFlowMovementRail
{
public:
    EventFlowMovementRail(al::LiveActor*);
    init(al::ActorInitInfo const&);
    appear();
    exeMove();
};

} 
