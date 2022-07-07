#pragma once

namespace al { 

class ExecutorActorExecuteBase
{
public:
    ExecutorActorExecuteBase(char const*);
    registerActor(al::LiveActor*);
    createExecutorTable();
    addActor(al::LiveActor*);
    removeActor(al::LiveActor*);
};

} 
