#pragma once

namespace nn { namespace nex { 

class JobRetrieveGameAuthToken
{
public:
    JobRetrieveGameAuthToken();
    ~JobRetrieveGameAuthToken();
    Initialize(unsigned int, unsigned long, nn::nex::String const&, nn::nex::String*, nn::nex::String*);
    StepDummyToComplete();
    StepDeriveKey();
    CompleteJob(nn::nex::qResult const&);
};

} } 
