#pragma once

namespace al { 

class SensorMsgBindInit
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgBindInit();
};

} 
