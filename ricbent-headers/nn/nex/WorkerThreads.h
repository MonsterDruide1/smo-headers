#pragma once

namespace nn { namespace nex { 

class WorkerThreads
{
public:
    Stop();
    Start(unsigned int);
    GetNbWorkers() const;
    WorkerThreads();
    ~WorkerThreads();
    Run(int);
    GetState();
    IsRunning() const;
    IsAWorker(unsigned long) const;
    CurrentThreadIsAWorker() const;
    Initialize();
    Teardown();
    s_threadPriority;
    s_threadCoreNo;
};

} } 
