#pragma once

namespace al { 

class EventFlowMovementWander
{
public:
    EventFlowMovementWander(al::LiveActor*);
    init(al::ActorInitInfo const&);
    appear();
    kill();
    exeWait();
    exeTurnOneTime();
    exeTurnLoop();
    exeWalk();
};

} 
