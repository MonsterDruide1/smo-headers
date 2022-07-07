#pragma once

namespace nn { namespace nex { 

class SystemComponent
{
public:
    StateTransition(nn::nex::SystemComponent::_State);
    OnInitialize();
    OnTerminate();
    EndInitialization();
    EndTermination();
    TestState();
    DoWork();
    SystemComponent(nn::nex::String const&);
    ~SystemComponent();
    Initialize();
    Terminate();
    WaitForTerminatedState(unsigned int);
    SetParent(nn::nex::SystemComponent*);
    SetName(nn::nex::String const&);
    GetStateString(nn::nex::SystemComponent::_State);
    SetState(nn::nex::SystemComponent::_State, bool);
    IncrementInUseCount(char const*);
    DecrementInUseCount(char const*);
    ValidTransition(nn::nex::SystemComponent::_State);
    UseIsAllowed();
    WaitForReadyState(unsigned int);
    GetType() const;
    IsAKindOf(char const*) const;
    BeginInitialization();
    BeginTermination();
};

} } 
