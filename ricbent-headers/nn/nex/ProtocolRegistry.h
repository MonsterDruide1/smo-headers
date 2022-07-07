#pragma once

namespace nn { namespace nex { 

class ProtocolRegistry
{
public:
    RegisterProtocol(unsigned short, nn::nex::Protocol*);
    GetProtocol(unsigned short, nn::nex::Protocol::_Type);
    ProtocolRegistry();
    ~ProtocolRegistry();
    GetServerProtocol(unsigned short);
    TraceProtocols(unsigned int);
    RegisterProtocol(nn::nex::Protocol*);
    UnregisterProtocol(nn::nex::Protocol*);
};

} } 
