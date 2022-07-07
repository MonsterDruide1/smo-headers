#pragma once

namespace nn { namespace nex { namespace PseudoGlobalVariable<nn::nex::DDLDeclarations*> {

~PseudoGlobalVariable();
AllocateExtraContexts();
FreeExtraContexts();
ResetContext(unsigned int);
GetNext();
SetNext(nn::nex::PseudoGlobalVariableRoot*);
ResetContexts();

} } } 
