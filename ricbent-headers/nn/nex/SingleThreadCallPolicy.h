#pragma once

namespace nn { namespace nex { 

class SingleThreadCallPolicy
{
public:
    SingleThreadCallPolicy();
    AcceptOneThread(unsigned long);
    AcceptAnyThread();
    SetMaximumRecursionLevel(unsigned int);
    BeginCallImpl();
    EndCallImpl();
    CurrentThreadIsDispatchingJobs() const;
    ~SingleThreadCallPolicy();
};

} } 
