#pragma once

namespace nn { namespace nex { 

class PseudoGlobalVariableRoot
{
public:
    ResetContextForAllVariables(unsigned int);
    PseudoGlobalVariableRoot();
    ~PseudoGlobalVariableRoot();
    AllocateExtraContextsForAllVariables(unsigned long);
    FreeExtraContextsForAllVariables();
    GetNbOfExtraContexts();
    s_uiNbOfExtraContexts;
    s_oList;
};

} } 
