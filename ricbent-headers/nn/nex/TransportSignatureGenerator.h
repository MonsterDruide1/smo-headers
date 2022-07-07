#pragma once

namespace nn { namespace nex { 

class TransportSignatureGenerator
{
public:
    TransportSignatureGenerator();
    ~TransportSignatureGenerator();
    ComputeSourceSignature(unsigned int, unsigned short);
};

} } 
