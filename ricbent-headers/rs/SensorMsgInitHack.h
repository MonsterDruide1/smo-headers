#pragma once

namespace rs { 

class SensorMsgInitHack
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgInitHack();
};

} 
