#pragma once

namespace nn { namespace nex { namespace ThreadVariable<unsigned int> {

GetRef();
operator=(unsigned int const&);
ClearValue(unsigned long);
ResetValues();
ThreadVariable(unsigned int const&);
~ThreadVariable();
ClearValue();

} } } 
