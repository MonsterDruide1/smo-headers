#pragma once

namespace rs { 

class SensorMsgGhostReverse
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgGhostReverse();
};

} 
