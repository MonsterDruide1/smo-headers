#pragma once

namespace nn { namespace nex { 

class JobCheckNATProperties
{
public:
    JobCheckNATProperties(nn::nex::CallContext*, nn::nex::InetAddress const&);
    StepInitializeImpl();
    StepPrepareSocket();
    StepSend();
    Finished();
    HandleResult();
    ~JobCheckNATProperties();
};

} } 
