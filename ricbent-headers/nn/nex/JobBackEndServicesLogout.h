#pragma once

namespace nn { namespace nex { 

class JobBackEndServicesLogout
{
public:
    JobBackEndServicesLogout(unsigned int, nn::nex::BackEndServices*, nn::nex::Credentials*);
    DisconnectFromSecureConnectionService();
    ~JobBackEndServicesLogout();
    ProcessAuthDisconnectionResult();
    CompleteLogoutFailure();
    MarkCredentialsInvalid();
    ProcessSecConnDisconnectionResult();
    TerminateStreamManager();
    CompleteLogout();
    WaitForStreamManagerTermination();
};

} } 
