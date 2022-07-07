#pragma once

namespace al { 

class EventFlowMovement
{
public:
    getEventFlowDataHolder() const;
    kill();
    control();
    getNerveKeeper() const;
    isTurnMovement() const;
    isWaitAtPointMovement() const;
    init(al::ActorInitInfo const&);
    EventFlowMovement(char const*, al::LiveActor*);
    movement();
    initNerve(al::Nerve const*, int);
    appear();
};

} 
