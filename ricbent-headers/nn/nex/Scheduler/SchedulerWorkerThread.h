#pragma once

namespace nn { namespace nex { namespace Scheduler { 

class SchedulerWorkerThread
{
public:
    SchedulerWorkerThread();
    ~SchedulerWorkerThread();
    Initialize();
    Work();
};

} } } 
