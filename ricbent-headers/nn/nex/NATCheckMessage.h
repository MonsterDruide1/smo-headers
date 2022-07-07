#pragma once

namespace nn { namespace nex { 

class NATCheckMessage
{
public:
    NATCheckMessage();
    ~NATCheckMessage();
    ToNetworkByteOrder();
    FromNetworkByteOrder();
    Trace(unsigned long);
};

} } 
