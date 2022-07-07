#pragma once

namespace nn { namespace nex { 

class _Proto_NotificationProtocolServer
{
public:
    DispatchProtocolMessage(nn::nex::Message*, nn::nex::Message*, bool*, nn::nex::EndPoint*);
    ProtoStub_ProcessNotificationEvent(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_NotificationProtocolServer*);
    ~_Proto_NotificationProtocolServer();
};

} } 
