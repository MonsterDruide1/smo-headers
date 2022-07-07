#pragma once

namespace nn { namespace nex { 

class MD5ChecksumWithKey
{
public:
    ~MD5ChecksumWithKey();
    MD5ChecksumWithKey();
    ChecksumComputeHelper(unsigned char const**, unsigned long const*, unsigned long, nn::nex::MD5&);
    ComputeChecksum(unsigned char const**, unsigned long const*, unsigned long, nn::nex::SignatureBytes&);
    ComputeChecksum(nn::nex::Buffer const&, nn::nex::Buffer*);
    ComputeChecksumForTransportArray(unsigned char const**, unsigned long const*, unsigned long);
    Test();
    IsReady() const;
    GetChecksumLength();
};

} } 
