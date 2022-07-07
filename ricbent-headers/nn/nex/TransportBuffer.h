#pragma once

namespace nn { namespace nex { 

class TransportBuffer
{
public:
    TransportBuffer(unsigned long, unsigned long);
    ReserveBuffer(unsigned long, unsigned long);
    AllocateBuffer(unsigned long);
    FreeBuffer(nn::nex::Buffer*);
    ~TransportBuffer();
};

} } 
