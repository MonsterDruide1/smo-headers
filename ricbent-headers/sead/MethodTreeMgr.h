#pragma once

namespace sead { 

class MethodTreeMgr
{
public:
    MethodTreeMgr();
    ~MethodTreeMgr();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
