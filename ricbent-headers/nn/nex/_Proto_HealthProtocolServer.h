#pragma once

namespace nn { namespace nex { 

class _Proto_HealthProtocolServer
{
public:
    DispatchProtocolMessage(nn::nex::Message*, nn::nex::Message*, bool*, nn::nex::EndPoint*);
    ~_Proto_HealthProtocolServer();
};

} } 
