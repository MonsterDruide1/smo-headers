#pragma once

namespace nn { namespace nex { namespace PseudoGlobalVariable<char const*> {

~PseudoGlobalVariable();
AllocateExtraContexts();
FreeExtraContexts();
ResetContext(unsigned int);
GetNext();
SetNext(nn::nex::PseudoGlobalVariableRoot*);
ResetContexts();

} } } 
