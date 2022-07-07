#pragma once

namespace al { 

class ExecutorListActorModelDrawBase
{
public:
    ExecutorListActorModelDrawBase(char const*, int, al::ExecuteSystemInitInfo const&);
    ~ExecutorListActorModelDrawBase();
    registerActorModel(al::LiveActor*);
    createList();
    executeList() const;
    isActive() const;
};

} 
