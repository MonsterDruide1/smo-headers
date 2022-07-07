#pragma once

namespace nn { namespace nex { 

class PRUDPUserProtocol
{
public:
    AcquireInstance();
    ReleaseInstance();
    PRUDPUserProtocol();
    ~PRUDPUserProtocol();
    RegisterUserReceiveCallback(void (*)(unsigned int, unsigned char*, unsigned long));
    UnregisterUserReceiveCallback();
    RegisterUserPrivateReceiveCallback(void (*)(unsigned int, nn::nex::Buffer*, unsigned int, unsigned char));
    UnregisterUserPrivateReceiveCallback();
    FaultDetection(nn::nex::EndPoint*, unsigned int);
    PeerDisconnected(nn::nex::EndPoint*);
    Receive(nn::nex::EndPoint*, nn::nex::Buffer*, unsigned char);
    Receive(nn::nex::EndPoint*, nn::nex::Buffer*, unsigned int, unsigned char);
    Send(nn::nex::EndPoint*, unsigned char const*, unsigned long, unsigned int, unsigned char, unsigned int);
};

} } 
