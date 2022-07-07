#pragma once

namespace nn { namespace nex { 

class JobConnectSecureEndPoint
{
public:
    JobConnectSecureEndPoint(nn::nex::SecureEndPoint*, nn::nex::StationURL const*, nn::nex::Buffer*, nn::nex::Buffer*, void (*)(nn::nex::EndPoint*, nn::nex::qResult, nn::nex::UserContext const*), nn::nex::UserContext const&, unsigned int);
    ~JobConnectSecureEndPoint();
    CancelJob();
    Execute();
    ExecuteStep();
    GetStatusString() const;
    ParseURL();
    CheckConnectionData();
    RequestConnectionData();
    PerformConnect();
    ProcessConnectResult();
    ReadyToPerformConnect();
    InitializeBufferRequest();
    BuildListURLs(nn::nex::qList<nn::nex::StationURL>*);
    ConnectCompletionCallback(nn::nex::CallContext*, nn::nex::UserContext const*);
    ConnectCompletion(nn::nex::CallContext*);
};

} } 
