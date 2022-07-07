#pragma once

namespace sead { 

class FixedSizeJQ
{
public:
    FixedSizeJQ();
    initialize(unsigned int, sead::Heap*);
    finalize();
    begin();
    enque(sead::Job*);
    enqueSafe(sead::Job*);
    deque();
    deque(sead::Job**, unsigned int);
    rewind();
    clear();
    run(unsigned int, unsigned int*, sead::Worker*);
    debug_IsAllJobDone();
    getNumJobs() const;
};

} 
