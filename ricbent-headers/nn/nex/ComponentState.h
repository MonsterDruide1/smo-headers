#pragma once

namespace nn { namespace nex { 

class ComponentState
{
public:
    ~ComponentState();
    GetType() const;
    IsAKindOf(char const*) const;
    EnforceDeclareSysComponentMacro();
};

} } 
