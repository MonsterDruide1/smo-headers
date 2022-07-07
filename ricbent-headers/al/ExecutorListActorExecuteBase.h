#pragma once

namespace al { 

class ExecutorListActorExecuteBase
{
public:
    isActive() const;
    ExecutorListActorExecuteBase(char const*, int);
    registerActor(al::LiveActor*);
    createList();
    executeList() const;
    ~ExecutorListActorExecuteBase();
};

} 
