#pragma once

namespace nn { namespace nex { 

class HMACChecksum
{
public:
    HMACChecksum();
    ~HMACChecksum();
    KeyHasChanged();
    ChecksumComputeHelper(unsigned char const**, unsigned long const*, unsigned long, nn::nex::MD5&);
    ComputeChecksum(nn::nex::Buffer const&, nn::nex::Buffer*);
    ComputeChecksum(unsigned char const**, unsigned long const*, unsigned long, nn::nex::SignatureBytes&);
    ComputeChecksumForTransportArray(unsigned char const**, unsigned long const*, unsigned long);
    GetChecksumLength();
};

} } 
