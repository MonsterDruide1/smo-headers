#pragma once

namespace nn { namespace nex { 

class NintendoNotificationEventProtocolClient
{
public:
    NintendoNotificationEventProtocolClient(unsigned short);
    ProcessNintendoNotificationEvent_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, nn::nex::NintendoNotificationEvent const&);
    ProtoReturn_ProcessNintendoNotificationEvent(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    CallProcessNintendoNotificationEvent(nn::nex::ProtocolCallContext*, nn::nex::NintendoNotificationEvent const&);
    ExtractCallSpecificResults(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    ~NintendoNotificationEventProtocolClient();
    CreateResponder() const;
    s_protoReturnFunctions;
};

} } 
