#pragma once

namespace nn { namespace nex { 

class _Proto_MonitoringProtocolServer
{
public:
    DispatchProtocolMessage(nn::nex::Message*, nn::nex::Message*, bool*, nn::nex::EndPoint*);
    ProtoStub_GetClusterMembers(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_MonitoringProtocolServer*);
    ~_Proto_MonitoringProtocolServer();
};

} } 
