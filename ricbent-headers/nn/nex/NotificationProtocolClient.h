#pragma once

namespace nn { namespace nex { 

class NotificationProtocolClient
{
public:
    NotificationProtocolClient(unsigned short);
    ProcessNotificationEvent_PrepareRequest(nn::nex::ProtocolCallContext*, nn::nex::Message*, nn::nex::NotificationEvent const&);
    ProtoReturn_ProcessNotificationEvent(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    CallProcessNotificationEvent(nn::nex::ProtocolCallContext*, nn::nex::NotificationEvent const&);
    ExtractCallSpecificResults(nn::nex::Message*, nn::nex::ProtocolCallContext*);
    ~NotificationProtocolClient();
    CreateResponder() const;
    s_protoReturnFunctions;
};

} } 
