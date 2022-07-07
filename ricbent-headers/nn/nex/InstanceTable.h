#pragma once

namespace nn { namespace nex { 

class InstanceTable
{
public:
    AddInstance(nn::nex::InstanceControl*, unsigned int, unsigned int);
    DelInstance(nn::nex::InstanceControl*, unsigned int, unsigned int);
    CreateContext();
    DeleteContext(unsigned int);
    AllocateExtraContexts(unsigned long);
    FreeExtraContexts();
    GetHighestID() const;
    FindInstanceContext(nn::nex::InstanceControl*, unsigned int);
    InstanceTable();
    ~InstanceTable();
    AddInstanceToVector(nn::nex::InstanceControl*, unsigned int, unsigned int);
    DelInstanceFromVector(nn::nex::InstanceControl*, unsigned int, unsigned int);
};

} } 
