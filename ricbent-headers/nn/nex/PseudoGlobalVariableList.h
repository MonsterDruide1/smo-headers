#pragma once

namespace nn { namespace nex { 

class PseudoGlobalVariableList
{
public:
    PseudoGlobalVariableList();
    ~PseudoGlobalVariableList();
    AddVariable(nn::nex::PseudoGlobalVariableRoot*);
    RemoveVariable(nn::nex::PseudoGlobalVariableRoot*);
    GetVariable(unsigned int);
    FindVariableIndex(nn::nex::PseudoGlobalVariableRoot*);
    AllocateExtraContextsForAllVariables();
    FreeExtraContextsForAllVariables();
    ResetContextForAllVariables(unsigned int);
    GetNbOfVariables();
    s_pVariableListHead;
    m_uiNbOfVariables;
};

} } 
