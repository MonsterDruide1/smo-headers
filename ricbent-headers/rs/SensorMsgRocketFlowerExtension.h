#pragma once

namespace rs { 

class SensorMsgRocketFlowerExtension
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgRocketFlowerExtension();
};

} 
