#pragma once

namespace nn { namespace nex { namespace PseudoGlobalVariable<bool> {

~PseudoGlobalVariable();
AllocateExtraContexts();
FreeExtraContexts();
ResetContext(unsigned int);
GetNext();
SetNext(nn::nex::PseudoGlobalVariableRoot*);
ResetContexts();

} } } 
