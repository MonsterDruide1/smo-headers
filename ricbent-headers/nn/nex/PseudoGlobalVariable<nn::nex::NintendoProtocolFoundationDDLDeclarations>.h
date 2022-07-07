#pragma once

namespace nn { namespace nex { namespace PseudoGlobalVariable<nn::nex::NintendoProtocolFoundationDDLDeclarations> {

~PseudoGlobalVariable();
AllocateExtraContexts();
FreeExtraContexts();
ResetContext(unsigned int);
GetNext();
SetNext(nn::nex::PseudoGlobalVariableRoot*);
ResetContexts();

} } } 
