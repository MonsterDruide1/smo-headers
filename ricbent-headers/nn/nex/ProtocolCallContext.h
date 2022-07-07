#pragma once

namespace nn { namespace nex { 

class ProtocolCallContext
{
public:
    AddReturnValuePtr(void*);
    ProtocolCallContext(nn::nex::Credentials*);
    SetCredentials(nn::nex::Credentials*);
    ~ProtocolCallContext();
    BeginTransition(nn::nex::CallContext::State, nn::nex::qResult, bool);
    GetReturnValuePtr(unsigned int);
    ClearReturnValuePtr();
};

} } 
