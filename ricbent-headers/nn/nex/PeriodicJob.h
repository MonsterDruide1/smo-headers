#pragma once

namespace nn { namespace nex { 

class PeriodicJob
{
public:
    PeriodicJob(nn::nex::Job::JobType, nn::nex::DebugString const&);
    SetDefaultPostExecutionState();
    SkipWaitDelayAtTermination();
    ~PeriodicJob();
};

} } 
