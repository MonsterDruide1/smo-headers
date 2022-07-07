#pragma once

namespace nn { namespace nex { 

class JobBackEndServicesTerminate
{
public:
    JobBackEndServicesTerminate(unsigned int, nn::nex::BackEndServices*);
    StepWaitOnPendingJobs();
    ~JobBackEndServicesTerminate();
    StepWaitOnLoginCancel();
    StepInitLogoutIfRequired();
    StepLogoutComplete();
    SetFinalState(nn::nex::CallContext::State, nn::nex::qResult const&);
};

} } 
