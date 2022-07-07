#pragma once

namespace nn { namespace nex { 

class InstanceControl
{
public:
    SetDelegatorInstance(void*);
    InstanceControl(unsigned int, unsigned int);
    ~InstanceControl();
    CreateContext();
    DeleteContext(unsigned int);
    AllocateExtraContexts(unsigned long);
    FreeExtraContexts();
    GetHighestID();
    ContextIsValid(unsigned int);
    FindInstanceContext(nn::nex::InstanceControl*, unsigned int);
    s_oInstanceTable;
};

} } 
