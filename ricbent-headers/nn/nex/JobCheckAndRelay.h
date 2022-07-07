#pragma once

namespace nn { namespace nex { 

class JobCheckAndRelay
{
public:
    JobCheckAndRelay(nn::nex::CallContext*, nn::nex::qList<nn::nex::StationURL> const&, nn::nex::StationURL const&);
    StepCheck();
    ~JobCheckAndRelay();
    StepFailure();
    StepWaitForCheck();
    StepRelay();
    StepWaitForProbe();
};

} } 
