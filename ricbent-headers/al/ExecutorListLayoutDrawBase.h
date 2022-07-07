#pragma once

namespace al { 

class ExecutorListLayoutDrawBase
{
public:
    ExecutorListLayoutDrawBase(char const*, int, al::ExecuteSystemInitInfo const&);
    registerLayout(al::LayoutActor*);
    executeList() const;
    ~ExecutorListLayoutDrawBase();
    isActive() const;
};

} 
