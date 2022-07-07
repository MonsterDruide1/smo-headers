#pragma once

namespace nn { namespace nex { 

class GlobalNotificationEventManager
{
public:
    ProcessNotificationEvent(unsigned long, unsigned int, nn::nex::NotificationEvent const&);
    DispatchProtocolMessage(nn::nex::Message*, nn::nex::Message*, bool*, nn::nex::EndPoint*);
    RegisterGlobalNotificationEventManager(nn::nex::NotificationEventManager*);
    UnregisterGlobalNotificationEventManager(nn::nex::NotificationEventManager*);
    ~GlobalNotificationEventManager();
};

} } 
