#pragma once

namespace nn { namespace nex { 

class JobCallContextCallback
{
public:
    JobCallContextCallback(nn::nex::Job::JobType, char const*, nn::nex::CallContext*);
    ~JobCallContextCallback();
    StartJob();
    StepCallStart();
    CompleteJob(nn::nex::qResult const&);
    StepCallCompletion();
    StepFinish();
    CreateCallContext();
    StepCallCompletionImp();
    ProccessSuccess(nn::nex::CallContext*);
    ProccessFailure(nn::nex::CallContext*);
    ProccessCancel();
};

} } 
