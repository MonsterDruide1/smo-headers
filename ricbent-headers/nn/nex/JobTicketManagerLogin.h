#pragma once

namespace nn { namespace nex { 

class JobTicketManagerLogin
{
public:
    JobTicketManagerLogin(unsigned int, nn::nex::TicketManager*, nn::nex::qResult*, nn::nex::String const&, char const*, unsigned long*, nn::nex::RVConnectionData*, nn::nex::String*, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String>*);
    InitiateLogin();
    ~JobTicketManagerLogin();
    CompleteJob(nn::nex::CallContext::State, nn::nex::qResult);
    ProcessLoginResult();
    DeriveKey();
    ValidateKey();
};

} } 
