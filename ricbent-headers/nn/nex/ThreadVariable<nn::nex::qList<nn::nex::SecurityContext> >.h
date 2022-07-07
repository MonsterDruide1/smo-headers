#pragma once

namespace nn { namespace nex { namespace ThreadVariable<nn::nex::qList<nn::nex::SecurityContext> > {

ThreadVariable(nn::nex::qList<nn::nex::SecurityContext> const&);
~ThreadVariable();
GetRef();
GetRef() const;
ResetValues();
ClearValue();
ClearValue(unsigned long);

} } } 
