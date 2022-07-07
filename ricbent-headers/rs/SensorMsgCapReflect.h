#pragma once

namespace rs { 

class SensorMsgCapReflect
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgCapReflect();
};

} 
