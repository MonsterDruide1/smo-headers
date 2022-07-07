#pragma once

namespace al { 

class NetworkSystem
{
public:
    allocNexMemory(unsigned long);
    freeNexMemory(void*);
    initializeNex();
    finalizeNex();
    NetworkSystem(nn::account::UserHandle*, bool);
    execute(sead::Thread*, long);
    getNgsFacade() const;
    endInit();
    ~NetworkSystem();
    getNexNetworkStateHolder() const;
    updateBeforeScene();
    updateAfterScene();
    requestSystemInitialize();
    isAvailable() const;
    sNexHeap;
};

} 
