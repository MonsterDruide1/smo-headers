#pragma once

namespace nn { namespace nex { namespace ThreadVariable<nn::nex::ObjectThreadRoot*> {

GetRef();
operator=(nn::nex::ObjectThreadRoot* const&);
ThreadVariable(nn::nex::ObjectThreadRoot* const&);
~ThreadVariable();
ResetValues();
ClearValue();
ClearValue(unsigned long);

} } } 
