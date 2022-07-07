#pragma once

namespace al { 

class SensorMsgStringV4fPtr
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgStringV4fPtr();
};

} 
