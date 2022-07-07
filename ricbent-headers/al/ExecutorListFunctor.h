#pragma once

namespace al { 

class ExecutorListFunctor
{
public:
    ExecutorListFunctor(char const*, int);
    registerFunctor(al::FunctorBase const&);
    executeList() const;
    isActive() const;
    ~ExecutorListFunctor();
};

} 
