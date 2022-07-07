#pragma once

namespace nn { namespace nex { 

class JobSigloLogin
{
public:
    Initialize(unsigned int, unsigned int, nn::nex::NgsFacade*, void const*, int);
    Initialize(unsigned int, unsigned int, nn::nex::NgsFacade*, unsigned long, void const*, int);
    JobSigloLogin();
    ~JobSigloLogin();
    StepGetGameAuthentication();
    StepGameLogin();
    StepWaitingForGetGameAuthentication();
    CreateGamerServerUri(nn::nex::String*);
    StepWaitingForGameLogin();
};

} } 
