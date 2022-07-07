#pragma once

namespace al { 

class SensorMsgHoleIn
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgHoleIn();
};

} 
