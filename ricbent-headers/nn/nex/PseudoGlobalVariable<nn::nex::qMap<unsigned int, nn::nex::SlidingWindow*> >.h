#pragma once

namespace nn { namespace nex { namespace PseudoGlobalVariable<nn::nex::qMap<unsigned int, nn::nex::SlidingWindow*> > {

~PseudoGlobalVariable();
AllocateExtraContexts();
FreeExtraContexts();
ResetContext(unsigned int);
GetNext();
SetNext(nn::nex::PseudoGlobalVariableRoot*);
ResetContexts();

} } } 
