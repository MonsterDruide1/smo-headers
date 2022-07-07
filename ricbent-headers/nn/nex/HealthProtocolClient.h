#pragma once

namespace nn { namespace nex { 

class HealthProtocolClient
{
public:
    HealthProtocolClient(unsigned short);
    PingDaemon_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, bool*);
    ProtoReturn_PingDaemon(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    PingDatabase_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, bool*);
    ProtoReturn_PingDatabase(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    RunSanityCheck_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, bool*);
    ProtoReturn_RunSanityCheck(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    FixSanityErrors_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, bool*);
    ProtoReturn_FixSanityErrors(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    CallPingDaemon(nn::nex::ProtocolCallContext*, bool*);
    CallPingDatabase(nn::nex::ProtocolCallContext*, bool*);
    CallRunSanityCheck(nn::nex::ProtocolCallContext*, bool*);
    CallFixSanityErrors(nn::nex::ProtocolCallContext*, bool*);
    ExtractCallSpecificResults(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    ~HealthProtocolClient();
    CreateResponder() const;
    s_protoReturnFunctions;
};

} } 
