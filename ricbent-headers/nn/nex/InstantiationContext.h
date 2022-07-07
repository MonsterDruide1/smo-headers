#pragma once

namespace nn { namespace nex { 

class InstantiationContext
{
public:
    AddInstance(nn::nex::InstanceControl*, unsigned int);
    DelInstance(nn::nex::InstanceControl*, unsigned int);
    InstantiationContext();
    InitContext();
    InstantiationContext(nn::nex::InstanceControl*, unsigned int);
    ~InstantiationContext();
};

} } 
