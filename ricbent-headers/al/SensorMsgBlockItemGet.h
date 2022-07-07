#pragma once

namespace al { 

class SensorMsgBlockItemGet
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgBlockItemGet();
};

} 
