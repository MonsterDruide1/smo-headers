#pragma once

namespace nn { namespace nex { 

class SystemComponentGroup
{
public:
    RegisterComponent(nn::nex::SystemComponent*);
    UnregisterComponent(nn::nex::SystemComponent*);
    SystemComponentGroup(nn::nex::String const&);
    UnregisterAllComponents();
    ~SystemComponentGroup();
    TestState();
    GetComponentsStates() const;
    GetComponentsState() const;
    ApplyOwnUse(nn::nex::SystemComponent::_State);
    ComputeGroupState(unsigned int);
    BeginInitialization();
    EndInitialization();
    BeginTermination();
    EndTermination();
    DoWork();
    FindComponentByState(nn::nex::SystemComponent::_State);
    FindComponentByName(nn::nex::String const&);
    GetType() const;
    IsAKindOf(char const*) const;
    EnforceDeclareSysComponentMacro();
    OnInitialize();
    OnTerminate();
};

} } 
