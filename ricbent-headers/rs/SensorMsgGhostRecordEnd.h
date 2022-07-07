#pragma once

namespace rs { 

class SensorMsgGhostRecordEnd
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgGhostRecordEnd();
};

} 
