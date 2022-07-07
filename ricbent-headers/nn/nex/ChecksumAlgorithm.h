#pragma once

namespace nn { namespace nex { 

class ChecksumAlgorithm
{
public:
    ChecksumAlgorithm();
    ~ChecksumAlgorithm();
    ReduceChecksumLength(unsigned char);
    AppendChecksum(nn::nex::Buffer*);
    CompressChecksum(nn::nex::Buffer*);
    RemoveChecksum(nn::nex::Buffer*);
    DeriveKey(nn::nex::Buffer const&, unsigned int);
    DeriveKey(char const*, unsigned int);
    DeriveKey(nn::nex::CallContext*, nn::nex::ChecksumAlgorithm*, nn::nex::Buffer const&, unsigned int, nn::nex::Buffer const&, unsigned int, nn::nex::Key*, nn::nex::Job::JobType);
    DeriveKey(nn::nex::CallContext*, nn::nex::ChecksumAlgorithm*, char const*, unsigned int, unsigned long, unsigned int, nn::nex::Key*, nn::nex::Job::JobType);
    IsReady() const;
    ComputeChecksumForTransport(unsigned char const*, unsigned long);
};

} } 
