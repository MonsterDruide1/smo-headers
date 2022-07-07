#pragma once

namespace rs { 

class SensorMsgRequestTransferHack
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgRequestTransferHack();
};

} 
