#pragma once

namespace nn { namespace nex { 

class JobCheckCurrentPort
{
public:
    JobCheckCurrentPort(nn::nex::CallContext*, nn::nex::InetAddress const&, bool);
    StepInitializeImpl();
    StepPrepareSocket();
    StepSend();
    Finished();
    HandleResult();
    ~JobCheckCurrentPort();
    s_uiCurrentPort;
};

} } 
