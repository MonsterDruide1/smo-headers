#pragma once

namespace nn { namespace nex { 

class CallContextRegister
{
public:
    GetCallContext(unsigned int);
    Register(nn::nex::CallContext*);
    Unregister(unsigned int);
    GetAssociatedId(unsigned int, nn::nex::qVector<unsigned int>*);
    CallContextRegister();
    ~CallContextRegister();
    BeginInitialization();
    Start();
    BeginTermination();
    Stop();
    CheckExpiredCalls(int);
    CancelExpiredCalls();
    CancelCallContexts(nn::nex::EndPoint*, unsigned int);
    AssociateCallContext(unsigned int, unsigned int);
    Trace(unsigned long);
    GetType() const;
    IsAKindOf(char const*) const;
    EnforceDeclareSysComponentMacro();
    s_ssCheckExpiredCallsPeriod;
};

} } 
