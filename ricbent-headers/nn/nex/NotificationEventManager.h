#pragma once

namespace nn { namespace nex { 

class NotificationEventManager
{
public:
    NotificationEventManager(nn::nex::NotificationEventManager*);
    ~NotificationEventManager();
    Clone() const;
    RegisterNotificationEventHandler(nn::nex::NotificationEventHandler*);
    UnregisterNotificationEventHandler(nn::nex::NotificationEventHandler*);
    ProcessNotificationEvent(unsigned long, unsigned int, nn::nex::NotificationEvent const&);
    IsEventValid(nn::nex::NotificationEvent const&);
    ProcessNotificationEvent(nn::nex::NotificationEvent const&);
    s_uiTraceFlags;
};

} } 
