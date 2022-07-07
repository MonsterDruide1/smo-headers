#pragma once

namespace rs { 

class SensorMsgTransferHack
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgTransferHack();
};

} 
