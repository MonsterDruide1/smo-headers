#pragma once

namespace nn { namespace nex { 

class JobDeriveKey
{
public:
    JobDeriveKey(nn::nex::Job::JobType, unsigned int, nn::nex::ChecksumAlgorithm*, nn::nex::Buffer const*, unsigned int, nn::nex::Buffer const*, unsigned int, nn::nex::Key*);
    ~JobDeriveKey();
    Execute();
    CompleteJob(nn::nex::Key const&);
};

} } 
