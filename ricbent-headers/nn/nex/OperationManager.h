#pragma once

namespace nn { namespace nex { 

class OperationManager
{
public:
    OperationManager();
    ~OperationManager();
    GetCurrentOperation() const;
    TraceOperationStack(unsigned long);
    RegisterCallback(nn::nex::OperationCallback*);
    UnregisterCallback(nn::nex::OperationCallback*);
    InvokeCallbacks(int, int, nn::nex::Operation*);
    OperationBegins(nn::nex::Operation*);
    OperationEnds(nn::nex::Operation*);
    PopOperation(nn::nex::Operation*);
};

} } 
