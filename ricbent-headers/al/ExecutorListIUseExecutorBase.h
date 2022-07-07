#pragma once

namespace al { 

class ExecutorListIUseExecutorBase
{
public:
    ExecutorListIUseExecutorBase(char const*, int);
    registerUser(al::IUseExecutor*);
    isActive() const;
    ~ExecutorListIUseExecutorBase();
};

} 
