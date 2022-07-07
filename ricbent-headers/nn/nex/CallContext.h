#pragma once

namespace nn { namespace nex { 

class CallContext
{
public:
    InitiateCall();
    CallContext();
    ~CallContext();
    Cancel(nn::nex::CallContext::State);
    IsRegistered() const;
    Unregister();
    SetDependentConnection(void*, unsigned int);
    SignalSuccess(nn::nex::qResult);
    SetStateImpl(nn::nex::CallContext::State, nn::nex::qResult, bool);
    SignalFailure(nn::nex::qResult);
    SignalCompletion(nn::nex::qResult);
    TransitionIsValid(nn::nex::CallContext::State, nn::nex::CallContext::State);
    FlagIsSet(unsigned int) const;
    Register();
    Reset();
    GetStateString(nn::nex::CallContext::State);
    SetCallInProgressState();
    InitiateSpecialCall();
    RegisterCompletionCallback(void (*)(nn::nex::CallContext*, nn::nex::UserContext const*), nn::nex::UserContext const&, bool);
    RegisterCompletionCallback(nn::nex::CallbackRoot*, bool, bool);
    RegisterCancellationCallback(nn::nex::CallbackRoot*);
    CancelImpl(nn::nex::CallContext::State);
    Wait(unsigned int);
    SetUserContext(unsigned long, nn::nex::UserContext const&);
    GetUserContext(unsigned long) const;
    SetFlag(unsigned int);
    FlagsAreValid() const;
    ClearFlag(unsigned int);
    BeginTransition(nn::nex::CallContext::State, nn::nex::qResult, bool);
    ProcessCallCompletion();
};

} } 
