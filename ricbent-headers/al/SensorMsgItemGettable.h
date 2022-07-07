#pragma once

namespace al { 

class SensorMsgItemGettable
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgItemGettable();
};

} 
