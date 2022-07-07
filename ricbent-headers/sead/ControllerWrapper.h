#pragma once

namespace sead { 

class ControllerWrapper
{
public:
    ControllerWrapper();
    calc(unsigned int, bool);
    createPadMaskFromControllerPadMask_(unsigned int) const;
    setPadConfig(int, unsigned char const*, bool);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~ControllerWrapper();
    cPadConfigDefault;
};

} 
