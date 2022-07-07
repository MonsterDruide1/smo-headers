#pragma once

namespace nn { namespace nex { 

class JobWait
{
public:
    JobWait(nn::nex::Job::JobType, nn::nex::DebugString const&, int);
    ~JobWait();
    Execute();
};

} } 
