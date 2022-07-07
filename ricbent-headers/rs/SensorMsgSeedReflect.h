#pragma once

namespace rs { 

class SensorMsgSeedReflect
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgSeedReflect();
};

} 
