#pragma once

namespace rs { 

class SensorMsgCapTrampolineAttack
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgCapTrampolineAttack();
};

} 
