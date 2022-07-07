#pragma once

namespace nn { namespace nex { 

class JobNNIDLogin
{
public:
    Initialize(unsigned int, unsigned int, nn::nex::NgsFacade*, unsigned long, void const*, int);
    ~JobNNIDLogin();
    JobNNIDLogin();
    StepGameLogin();
    StepWaitingForGameLogin();
};

} } 
