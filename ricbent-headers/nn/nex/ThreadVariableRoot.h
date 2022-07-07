#pragma once

namespace nn { namespace nex { 

class ThreadVariableRoot
{
public:
    ThreadVariableRoot();
    ~ThreadVariableRoot();
    GetThreadID();
    ResetValues();
    ClearValue();
    ClearValue(unsigned long);
};

} } 
