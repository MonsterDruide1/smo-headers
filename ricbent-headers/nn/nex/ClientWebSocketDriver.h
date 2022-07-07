#pragma once

namespace nn { namespace nex { 

class ClientWebSocketDriver
{
public:
    Create();
    Delete(nn::nex::SocketDriver::Socket*);
    Poll(nn::nex::SocketDriver::PollInfo*, unsigned int, unsigned int);
    ~ClientWebSocketDriver();
    SetSslAllowSelfSignedCerts(bool);
    GetSslAllowSelfSignedCerts();
};

} } 
