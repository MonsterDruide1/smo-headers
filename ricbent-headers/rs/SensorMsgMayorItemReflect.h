#pragma once

namespace rs { 

class SensorMsgMayorItemReflect
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgMayorItemReflect();
};

} 
