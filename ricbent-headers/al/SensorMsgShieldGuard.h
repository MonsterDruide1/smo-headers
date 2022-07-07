#pragma once

namespace al { 

class SensorMsgShieldGuard
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgShieldGuard();
};

} 
