#pragma once

namespace nn { namespace nex { 

class StepSequenceJob
{
public:
    CheckExceptions();
    StepSequenceJob(nn::nex::Job::JobType, nn::nex::DebugString const&);
    ~StepSequenceJob();
    SetStep(nn::nex::StepSequenceJob::Step const&);
    ResumeOnCallCompletion(nn::nex::CallContext*, nn::nex::StepSequenceJob::Step*);
    Execute();
    AddStepActivity();
    CreateResumeCompletionCallback(nn::nex::StepSequenceJob::Step*);
    ProcessCallResult(nn::nex::StepSequenceJob::Step*);
    ResumeOnCallCompletionOrAlreadyDone(nn::nex::CallContext*, nn::nex::StepSequenceJob::Step*);
    AddActivity(char const*);
    GetTraceInfo() const;
    TerminateComponent(nn::nex::SystemComponent*, nn::nex::StepSequenceJob::Step const&);
    s_JobStepExecutionBusyIntervalThreshold;
};

} } 
