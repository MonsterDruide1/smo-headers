#pragma once

namespace nn { namespace nex { 

class HealthClient
{
public:
    HealthClient();
    ~HealthClient();
    UpdateProtocolsDefaultCredentials(nn::nex::Credentials*);
    PingDaemon(nn::nex::ProtocolCallContext*, bool*);
    PingDaemon(nn::nex::ProtocolCallContext*);
    PingDatabase(nn::nex::ProtocolCallContext*, bool*);
    PingDatabase(nn::nex::ProtocolCallContext*);
    RunSanityCheck(nn::nex::ProtocolCallContext*, bool*);
    RunSanityCheck(nn::nex::ProtocolCallContext*);
    FixSanityErrors(nn::nex::ProtocolCallContext*, bool*);
    FixSanityErrors(nn::nex::ProtocolCallContext*);
    PingCppDaemon(nn::nex::ProtocolCallContext*);
    GetClusterMembers(nn::nex::ProtocolCallContext*, nn::nex::qList<nn::nex::String>*);
};

} } 
