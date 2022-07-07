#pragma once

namespace nn { namespace nex { 

class Job
{
public:
    DecoratedExecute();
    TestSuspendedJobState();
    SetDefaultPostExecutionState();
    SkipWaitDelayAtTermination();
    ProcessInTermination();
    ForceTerminate();
    Job(nn::nex::Job::JobType, nn::nex::DebugString const&);
    SetToWaiting(int);
    SetToComplete();
    SetToSuspended();
    ~Job();
    PerformExecution(nn::nex::Time const&);
    GetTraceInfo() const;
    GetStateString(nn::nex::Job::State) const;
    AddActivity(char const*);
    WaitForCompletion(unsigned int);
    SetState(nn::nex::Job::State);
    Resume();
    SetToReady();
    SetToRunning();
    SetToCancel();
    SetToInitial();
    ValidateTransition(nn::nex::Job::State, nn::nex::Job::State);
    RegisterCompletionCallback(void (*)(nn::nex::Job*, nn::nex::UserContext const*), nn::nex::UserContext const&);
    CancelJob();
    RegisterCompletionCallback(nn::nex::CallbackRoot*);
};

} } 
