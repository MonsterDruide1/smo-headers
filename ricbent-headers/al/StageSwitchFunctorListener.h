#pragma once

namespace al { 

class StageSwitchFunctorListener
{
public:
    StageSwitchFunctorListener();
    setOnFunctor(al::FunctorBase const&);
    setOffFunctor(al::FunctorBase const&);
    listenOn();
    listenOff();
};

} 
