#pragma once

namespace nn { namespace nex { 

class JobTerminate
{
public:
    JobTerminate(unsigned int, nn::nex::NgsFacade*);
    StepWaitOnPendingJobs();
    ~JobTerminate();
};

} } 
