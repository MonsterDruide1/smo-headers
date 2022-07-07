#pragma once

namespace nn { namespace nex { 

class ThreadVariableList
{
public:
    GetInstanceRef();
    ClearValue(unsigned long);
    ThreadVariableList();
    ~ThreadVariableList();
    ResetValues();
    ClearValue();
    AddVariable(nn::nex::ThreadVariableRoot*);
    RemoveVariable(nn::nex::ThreadVariableRoot*);
    s_isValid;
};

} } 
