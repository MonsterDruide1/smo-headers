#pragma once

namespace nn { namespace nex { 

class ProtocolMessageHolder
{
public:
    GetRelayMessage();
    GetPRUDPMessageInterface(nn::nex::Stream::Type);
    ProtocolMessageHolder();
    ~ProtocolMessageHolder();
    GetPRDUPMessageInterfaceByProtocol(nn::nex::TransportProtocol::Type);
};

} } 
