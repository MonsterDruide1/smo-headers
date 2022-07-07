#pragma once

namespace nn { namespace nex { 

class CallProtocolMethodOperation
{
public:
    CallProtocolMethodOperation();
    ~CallProtocolMethodOperation();
    PostponeOperation(int);
    InitializeForNewCallAttempt();
    AttachUserContext(nn::nex::UserContext const&);
    GetUserContext();
    GetAttemptCount();
    GetType() const;
    GetClassNameString() const;
    ForceImplOperationCommonMethodsMacro();
};

} } 
