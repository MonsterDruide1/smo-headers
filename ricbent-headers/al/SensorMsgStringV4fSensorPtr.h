#pragma once

namespace al { 

class SensorMsgStringV4fSensorPtr
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgStringV4fSensorPtr();
};

} 
