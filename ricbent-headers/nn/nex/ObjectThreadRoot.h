#pragma once

namespace nn { namespace nex { 

class ObjectThreadRoot
{
public:
    ObjectThreadRoot(nn::nex::String const&, unsigned int);
    ~ObjectThreadRoot();
    GetInstance();
    GetDefaultPrio();
    SetDefaultPrio(unsigned int);
    GetCurrentThreadID();
    ObjectThreadProc(void*);
    CallObjectMethodWrapper();
    Attach(unsigned long);
    Detach();
    Launch(unsigned long);
    LaunchImpl();
    SetPriority(unsigned int);
    WrapExceptionHandling();
    Wait(unsigned int);
    ReadyToRun();
    SetThreadName(nn::nex::String const&);
    GetThreadStackSize();
    SetThreadStackSize(unsigned long);
    UseAutoStack(bool);
    IsUsingAutoStack();
    CheckStack();
    s_uiDefaultPrio;
    s_uiDefaultThreadStackSize;
    s_avRunningThreads;
};

} } 
