#pragma once

namespace nn { namespace nex { 

class ClientStreamManager
{
public:
    ClientStreamManager();
    ~ClientStreamManager();
    Receive(nn::nex::EndPoint*, nn::nex::Buffer*, unsigned char);
    PeerDisconnected(nn::nex::EndPoint*);
    FaultDetection(nn::nex::EndPoint*, unsigned int);
    SetCredentials(nn::nex::Credentials*);
};

} } 
