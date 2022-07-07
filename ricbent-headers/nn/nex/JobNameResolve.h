#pragma once

namespace nn { namespace nex { 

class JobNameResolve
{
public:
    Initialize(unsigned int);
    ~JobNameResolve();
    CheckThread(int);
    StepRunThread();
    CompleteJob(nn::nex::qResult const&);
    StepCheck();
    StepCancelWait();
    g_isJobNameResolveRunning;
};

} } 
