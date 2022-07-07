#pragma once

namespace nn { namespace nex { 

class MonitoringProtocolClient
{
public:
    MonitoringProtocolClient(unsigned short);
    PingDaemon_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, bool*);
    ProtoReturn_PingDaemon(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    GetClusterMembers_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, nn::nex::qList<nn::nex::String>*);
    ProtoReturn_GetClusterMembers(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    CallPingDaemon(nn::nex::ProtocolCallContext*, bool*);
    CallGetClusterMembers(nn::nex::ProtocolCallContext*, nn::nex::qList<nn::nex::String>*);
    ExtractCallSpecificResults(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    ~MonitoringProtocolClient();
    CreateResponder() const;
    s_protoReturnFunctions;
};

} } 
