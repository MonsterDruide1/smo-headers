#pragma once

namespace sead { 

class MaskControllerWrapper
{
public:
    MaskControllerWrapper();
    calc(unsigned int, bool);
    createPadMaskFromControllerPadMask_(unsigned int) const;
    setPadConfig(int, unsigned int const*, bool);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~MaskControllerWrapper();
    cPadConfigDefault;
};

} 
