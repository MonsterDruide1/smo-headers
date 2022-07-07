#pragma once

namespace nn { namespace nex { 

class JobHttp
{
public:
    JobHttp();
    ~JobHttp();
    Initialize(unsigned int, nn::nex::String const&, nn::nex::HttpConnection::Method, nn::nex::HttpEventListener*, unsigned long);
    StepHttp();
    PrepareHttp();
    ProceedReceivedBuffer();
    CompleteJob(nn::nex::qResult const&);
    StepWaitingForHttp();
};

} } 
