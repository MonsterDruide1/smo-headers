#pragma once

namespace nn { namespace nex { 

class _Proto_UtilityProtocolServer
{
public:
    DispatchProtocolMessage(nn::nex::Message*, nn::nex::Message*, bool*, nn::nex::EndPoint*);
    ProtoStub_GetAssociatedNexUniqueIdsWithMyPrincipalId(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_UtilityProtocolServer*);
    ProtoStub_GetIntegerSettings(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_UtilityProtocolServer*);
    ProtoStub_GetStringSettings(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_UtilityProtocolServer*);
    ~_Proto_UtilityProtocolServer();
};

} } 
