#pragma once

namespace al { 

class SensorMsgStringVoidPtr
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgStringVoidPtr();
};

} 
