#pragma once

namespace al { 

class ExecutorListLayoutUpdate
{
public:
    ExecutorListLayoutUpdate(char const*, int);
    registerLayout(al::LayoutActor*);
    executeList() const;
    ~ExecutorListLayoutUpdate();
    isActive() const;
};

} 
