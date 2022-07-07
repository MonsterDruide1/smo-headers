#pragma once

namespace nn { namespace nex { 

class JobResolveRelayInfo
{
public:
    CreateAndStartJob(nn::nex::CallContext*);
    FailResolvedRelayInfo();
    SetRelayAddress();
    ResolvedRelayInfo();
    ~JobResolveRelayInfo();
    ProccessSuccess(nn::nex::CallContext*);
    ProccessFailure(nn::nex::CallContext*);
    ProccessCancel();
};

} } 
