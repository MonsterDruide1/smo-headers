#pragma once

namespace al { 

class ExecutorListActorCalcView
{
public:
    ExecutorListActorCalcView(char const*, int);
    createExecutor(char const*) const;
    ~ExecutorListActorCalcView();
};

} 
