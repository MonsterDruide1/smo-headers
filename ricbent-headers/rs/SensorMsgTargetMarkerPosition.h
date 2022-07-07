#pragma once

namespace rs { 

class SensorMsgTargetMarkerPosition
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgTargetMarkerPosition();
};

} 
