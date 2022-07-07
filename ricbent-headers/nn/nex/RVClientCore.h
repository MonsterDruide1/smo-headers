#pragma once

namespace nn { namespace nex { 

class RVClientCore
{
public:
    AcquireInstance();
    ReleaseInstance();
    RegisterGlobalNotificationEventManager(nn::nex::NotificationEventManager*);
    UnregisterGlobalNotificationEventManager(nn::nex::NotificationEventManager*);
    GetServerProtocol(unsigned short);
    SetGameServerTime(nn::nex::DateTime&);
    RVClientCore();
    RegisterServerProtocol(unsigned short, nn::nex::ServerProtocol*);
    ~RVClientCore();
    UnregisterServerProtocol(unsigned short);
    GetGameServerTime(nn::nex::DateTime*) const;
};

} } 
