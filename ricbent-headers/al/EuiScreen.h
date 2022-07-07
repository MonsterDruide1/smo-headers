#pragma once

namespace al { 

class EuiScreen
{
public:
    EuiScreen();
    ~EuiScreen();
    doSetupDrawInfo_();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
