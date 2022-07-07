#pragma once

namespace sead { 

class LogicalFrameBuffer
{
public:
    ~LogicalFrameBuffer();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
