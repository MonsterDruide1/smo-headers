#pragma once

namespace nn { namespace nex { 

class CRC16Checksum
{
public:
    CRC16Checksum();
    ~CRC16Checksum();
    ComputeChecksum(nn::nex::Buffer const&, nn::nex::Buffer*);
    ComputeChecksum(unsigned char const**, unsigned long const*, unsigned long, nn::nex::SignatureBytes&);
    ComputeChecksumForTransportArray(unsigned char const**, unsigned long const*, unsigned long);
    GetChecksumLength();
};

} } 
