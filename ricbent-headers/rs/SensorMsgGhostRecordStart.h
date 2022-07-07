#pragma once

namespace rs { 

class SensorMsgGhostRecordStart
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~SensorMsgGhostRecordStart();
};

} 
