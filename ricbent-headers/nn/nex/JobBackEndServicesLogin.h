#pragma once

namespace nn { namespace nex { 

class JobBackEndServicesLogin
{
public:
    JobBackEndServicesLogin(unsigned int, nn::nex::BackEndServices*, nn::nex::qResult*, nn::nex::String const&, char const*, char const*, unsigned short, char const*, nn::nex::Credentials**, nn::nex::String*, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String>*, int, nn::nex::StreamManager* (*)(), unsigned int (*)(bool), unsigned short (*)(bool));
    ValidateArguments();
    ~JobBackEndServicesLogin();
    CompleteJob(nn::nex::qResult);
    ConnectToAuthenticationService();
    ProcessDnsResolveResult();
    CreateStreamManager(bool) const;
    ProcessAuthConnectionResult();
    Authenticate();
    ProcessAuthenticationResult();
    ConnectToSecureConnectionService();
    CompleteLogin();
    ProcessSecConnConnectionResult();
    RegisterURLs();
    DisconnectFromAuthenticationService();
    ProcessAuthDisconnectionResult();
    WaitForStreamManagerForAuthenticationTermination();
    CompleteLogout();
    CancelJob();
};

} } 
