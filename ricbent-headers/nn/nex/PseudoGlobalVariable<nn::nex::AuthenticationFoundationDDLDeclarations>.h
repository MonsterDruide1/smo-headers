#pragma once

namespace nn { namespace nex { namespace PseudoGlobalVariable<nn::nex::AuthenticationFoundationDDLDeclarations> {

~PseudoGlobalVariable();
AllocateExtraContexts();
FreeExtraContexts();
ResetContext(unsigned int);
GetNext();
SetNext(nn::nex::PseudoGlobalVariableRoot*);
ResetContexts();

} } } 
