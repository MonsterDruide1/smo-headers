#pragma once

namespace rs { 

class SensorMsgSeedItemGet
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgSeedItemGet();
};

} 
