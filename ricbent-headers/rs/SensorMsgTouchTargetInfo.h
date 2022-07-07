#pragma once

namespace rs { 

class SensorMsgTouchTargetInfo
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgTouchTargetInfo();
};

} 
