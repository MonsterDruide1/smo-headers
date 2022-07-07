#pragma once

namespace rs { 

class SensorMsgHackDeathAreaSelfCheck
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgHackDeathAreaSelfCheck();
};

} 
