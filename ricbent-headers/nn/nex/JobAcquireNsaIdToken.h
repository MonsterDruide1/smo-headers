#pragma once

namespace nn { namespace nex { 

class JobAcquireNsaIdToken
{
public:
    Initialize(unsigned int, nn::account::UserHandle const*, nn::nex::String*, unsigned long*, nn::Result*);
    JobAcquireNsaIdToken();
    ~JobAcquireNsaIdToken();
    StepGetGameAuthentication();
    Complete(nn::nex::qResult const&);
    StepWaitingForGetGameAuthentication();
};

} } 
