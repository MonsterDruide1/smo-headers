#pragma once

namespace rs { 

class SensorMsgPunchGuard
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgPunchGuard();
};

} 
