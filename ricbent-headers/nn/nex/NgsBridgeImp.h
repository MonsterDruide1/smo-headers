#pragma once

namespace nn { namespace nex { 

class NgsBridgeImp
{
public:
    NgsBridgeImp(nn::nex::NgsFacade*);
    GetCredentials();
    GetPrincipalID();
    RegisterNotificationEventHandler(nn::nex::NotificationEventHandler*);
    UnregisterNotificationEventHandler(nn::nex::NotificationEventHandler*);
    ReplaceURL(nn::nex::ProtocolCallContext*, nn::nex::StationURL const&, nn::nex::StationURL const&);
    SendReport(unsigned int, void const*, unsigned int);
    IsConnected() const;
    ~NgsBridgeImp();
};

} } 
