#pragma once

namespace rs { 

class SensorMsgCapItemGet
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgCapItemGet();
};

} 
