#pragma once

namespace al { 

class LiveActorGroup
{
public:
    LiveActorGroup(char const*, int);
    registerActor(al::LiveActor*);
    removeActor(al::LiveActor const*);
    removeActorAll();
    isExistActor(al::LiveActor const*) const;
    isFull() const;
    calcAliveActorNum() const;
    getDeadActor() const;
    tryFindDeadActor() const;
    appearAll();
    killAll();
    makeActorAliveAll();
    makeActorDeadAll();
};

} 
