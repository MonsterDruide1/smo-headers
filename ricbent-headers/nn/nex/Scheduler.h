#pragma once

namespace nn { namespace nex { 

class Scheduler
{
public:
    Queue(nn::nex::Job*, bool);
    PreventBlockCall(bool, unsigned int, bool, bool (*)(nn::nex::RootObject*, unsigned int), nn::nex::RootObject*, bool*);
    GlobalSingleThreadDispatch(unsigned int);
    Cancel(nn::nex::Job*);
    StartDispatcherThread();
    WaitForAllJobsToComplete(int, bool);
    CurrentThreadCanWaitForJob();
    PreventRegularBlockCall(bool, unsigned int, bool (*)(nn::nex::RootObject*, unsigned int), nn::nex::RootObject*, nn::nex::qResult*);
    Scheduler(char const*, unsigned int, nn::nex::Scheduler::SchedulerWorkerThread*);
    ~Scheduler();
    UnregisterSpecialDispatchJob(nn::nex::Job*);
    SetName(char const*);
    StopDispatcherThread();
    HasDispatcherThread();
    InitializeThread();
    QueueImpl(nn::nex::Job*, bool);
    DeleteJob(nn::nex::Job*);
    IsQueued(nn::nex::Job const*) const;
    QueueNewlyReadyJobs();
    GetTotalQueueSize() const;
    GetReadyQueueSize() const;
    GetTotalNumberOfJobs() const;
    ClearAllQueues();
    WaitForEmptyQueues() const;
    WaitForJobToExecute(unsigned int);
    TimeToDeadline(nn::nex::Time) const;
    Dispatch(unsigned int, unsigned int);
    DispatchInternal(unsigned int, unsigned int);
    SpecialDispatch(nn::nex::Time const&);
    DispatchBegins();
    DispatchImpl(nn::nex::Time);
    DispatchEnds();
    ProcessCurrentJob(nn::nex::Time const&);
    ProcessJob(nn::nex::Job*, nn::nex::Time const&);
    SingleThreadDispatch(unsigned int);
    SingleThreadSpecialDispatch();
    GlobalSingleThreadSpecialDispatch();
    BypassGlobalSingleThreadDispatch();
    UseGlobalSingleThreadDispatch();
    RegisterSpecialDispatchJob(nn::nex::Job*, bool);
    EnableActivityTrace(bool);
    GetNbSpecialJobs() const;
    ProcessJobsInTermination(nn::nex::Job::JobType);
    TerminateDOCoreJobs();
    DeleteDOCoreJobs(nn::nex::qChain<nn::nex::Job*, nn::nex::DefaultChainPolicy<nn::nex::Job*> >*);
    DeleteDOCoreJobs(nn::nex::qMultiMap<nn::nex::Time, nn::nex::Job*>*);
    ForceTerminateJobs();
    RequeueWaitingJob(nn::nex::Job*, int);
    SetJobStepExecutionBusyIntervalThreshold(long);
    GetOneTypeJobsCount(nn::nex::Job::JobType) const;
    s_bGlobalDispatch;
    s_tiMaxDispatchInterval;
    s_tiInternalThreadDispatchInterval;
    s_csGlobalSystemLock;
};

} } 
