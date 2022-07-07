#pragma once

namespace nn { namespace nex { 

class PollForCompletionJob
{
public:
    PollForCompletionJob(nn::nex::Job::JobType, nn::nex::DebugString const&, bool (*)(nn::nex::UserContext&), bool (*)(nn::nex::UserContext&), nn::nex::UserContext, unsigned int, int);
    StepWaitForCompletion();
    ~PollForCompletionJob();
    Invoke(nn::nex::Job::JobType, nn::nex::DebugString const&, bool, bool (*)(nn::nex::UserContext&), bool (*)(nn::nex::UserContext&), nn::nex::UserContext, nn::nex::CallContext*, int);
    CompleteJob(nn::nex::qResult);
};

} } 
