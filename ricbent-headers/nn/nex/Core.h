#pragma once

namespace nn { namespace nex { 

class Core
{
public:
    SetFatalState(bool);
    RefreshThreadMode();
    Core();
    CreateGlobals();
    ~Core();
    DeleteGlobals();
    AcquireInstance();
    SetDefaultThreadAffinity(unsigned int);
    SetDefaultThreadPriority(unsigned int);
    SetInternalThreadPriority(unsigned int);
    GetInternalThreadPriority();
    ReleaseInstance();
    SetConnectionEncoding(unsigned int);
    SetThreadStackSize(unsigned long);
    GetThreadStackSize();
    SetTerminateImmediately(bool);
    SetTerminateImmediatelyCallback(void (*)(void*), void*);
    ResetTerminateImmediatelyCallback();
    s_bUsesThreads;
    s_bIsThreadSafe;
    s_bFatalState;
    s_uiCoreCount;
    s_bThreadMode;
    s_bUsesTransportBufferThread;
    s_oConnectionEncoding;
};

} } 
