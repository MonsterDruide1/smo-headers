#pragma once

namespace nn { namespace nex { namespace PseudoGlobalVariable<nn::nex::RankingDDLDeclarations> {

~PseudoGlobalVariable();
AllocateExtraContexts();
FreeExtraContexts();
ResetContext(unsigned int);
GetNext();
SetNext(nn::nex::PseudoGlobalVariableRoot*);
ResetContexts();

} } } 
