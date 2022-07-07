#pragma once

namespace al { 

class EventFlowMovementWait
{
public:
    EventFlowMovementWait(al::LiveActor*);
    appear();
    isWaitAtPointMovement() const;
};

} 
