#pragma once

namespace nn { namespace nex { 

class JobStartNATSession
{
public:
    StartJob();
    JobStartNATSession(nn::nex::CallContext*);
    ~JobStartNATSession();
    StepReady();
    StepCallCompletion();
    CompleteJob(nn::nex::qResult const&);
    StepFinish();
    StepDNSCallCompletion();
};

} } 
