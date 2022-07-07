#pragma once

namespace sead { 

class Resource
{
public:
    Resource();
    ~Resource();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
