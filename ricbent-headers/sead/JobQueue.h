#pragma once

namespace sead { 

class JobQueue
{
public:
    begin();
    run(unsigned int, unsigned int*, sead::Worker*);
    getNumJobs() const;
    isDone_();
    JobQueue();
    setGranularity(sead::CoreId, unsigned int);
    setGranularity(unsigned int);
    setCoreMaskAndWaitType(sead::CoreIdMask, sead::SyncType);
    runAll(unsigned int*);
    isAllParticipantThrough() const;
    FINISH(sead::CoreId);
    wait_AT_WORKER();
    wait();
};

} 
