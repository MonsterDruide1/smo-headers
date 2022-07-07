#pragma once

namespace rs { 

class SensorMsgAckCheckpoint
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgAckCheckpoint();
};

} 
