#pragma once

namespace nn { namespace nex { 

class PseudoSingleton
{
public:
    ~PseudoSingleton();
    PseudoSingleton(unsigned int);
    SetContext(unsigned int);
    SetContextIfRequired(unsigned int);
    UseInstantiationContext(unsigned long);
    UseNoInstantiationContext();
    UsingInstantiationContext();
    st_pIcContext;
    s_bUseInstantiationContext;
};

} } 
