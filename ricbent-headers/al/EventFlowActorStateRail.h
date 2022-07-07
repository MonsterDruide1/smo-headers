#pragma once

namespace al { 

class EventFlowActorStateRail
{
public:
    EventFlowActorStateRail(char const*, al::EventFlowMovement*);
    initByPlacementInfo(al::ActorInitInfo const&);
    appear();
    exeWalk();
    exeTurn();
    ~EventFlowActorStateRail();
};

} 
