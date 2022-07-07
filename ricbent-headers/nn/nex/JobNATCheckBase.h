#pragma once

namespace nn { namespace nex { 

class JobNATCheckBase
{
public:
    JobNATCheckBase(nn::nex::CallContext*, nn::nex::InetAddress const&);
    StepInitialize();
    StepFinish();
    InitializeSocket();
    ExecuteNATCheck(unsigned int);
    CanRetry();
    ~JobNATCheckBase();
    BindRandomPort();
    StepExecute();
    SendNextQueuedMessage();
    StepDNSResolve();
};

} } 
