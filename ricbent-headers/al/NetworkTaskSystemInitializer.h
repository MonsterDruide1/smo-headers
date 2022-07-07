#pragma once

namespace al { 

class NetworkTaskSystemInitializer
{
public:
    NetworkTaskSystemInitializer(sead::Heap*, nn::nex::NgsFacade*, al::FunctorBase const&);
    ~NetworkTaskSystemInitializer();
    doExecute();
};

} 
