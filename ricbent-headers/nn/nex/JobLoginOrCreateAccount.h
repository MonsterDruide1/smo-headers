#pragma once

namespace nn { namespace nex { 

class JobLoginOrCreateAccount
{
public:
    JobLoginOrCreateAccount(unsigned int, nn::nex::BackEndServices*, nn::nex::SandboxConnectionInfo const&, nn::nex::String const&, nn::nex::String const&, nn::nex::String const&, unsigned int, nn::nex::Credentials**, nn::nex::String*, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String>*);
    ~JobLoginOrCreateAccount();
    SetCreateAccountCommand(nn::nex::GuestCreateAccountCommand*);
    RVLogin();
    ProcessRVLoginResult();
    CreateAccount();
    ProcessCreateAccountResult();
    CompleteJob(nn::nex::qResult const&);
};

} } 
