#pragma once

namespace al { 

class PadUiKeyInputAddon
{
public:
    PadUiKeyInputAddon(sead::Controller*);
    calc();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~PadUiKeyInputAddon();
};

} 
