#pragma once

namespace nn { namespace nex { 

class JobLogin
{
public:
    JobLogin();
    ~JobLogin();
    InitializeCommon(unsigned int, unsigned int, nn::nex::NgsFacade*, int);
    Complete(nn::nex::qResult const&);
    Wait();
    DEFAULT_JOB_DELAY;
};

} } 
