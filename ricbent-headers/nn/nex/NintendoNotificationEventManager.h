#pragma once

namespace nn { namespace nex { 

class NintendoNotificationEventManager
{
public:
    NintendoNotificationEventManager(nn::nex::NintendoNotificationEventManager*);
    ~NintendoNotificationEventManager();
    Clone() const;
    RegisterNintendoNotificationEventHandler(nn::nex::NintendoNotificationEventHandler*);
    UnregisterNintendoNotificationEventHandler(nn::nex::NintendoNotificationEventHandler*);
    ProcessNintendoNotificationEvent(nn::nex::NintendoNotificationEvent const&);
    s_uiTraceFlags;
};

} } 
