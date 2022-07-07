#pragma once

namespace al { 

class SensorMsgBindStart
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgBindStart();
};

} 
