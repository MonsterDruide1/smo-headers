#pragma once

namespace al { 

class EventFlowMovementTurnSeparate
{
public:
    EventFlowMovementTurnSeparate(al::LiveActor*);
    init(al::ActorInitInfo const&);
    appear();
    exeWaitFar();
    exeWaitNear();
    exeTurn();
    isTurnMovement() const;
    isWaitAtPointMovement() const;
};

} 
