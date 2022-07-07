#pragma once

namespace rs { 

class SensorMsgWeaponItemGet
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgWeaponItemGet();
};

} 
