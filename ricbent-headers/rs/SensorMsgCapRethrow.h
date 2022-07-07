#pragma once

namespace rs { 

class SensorMsgCapRethrow
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgCapRethrow();
};

} 
