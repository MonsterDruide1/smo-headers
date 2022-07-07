#pragma once

namespace sead { 

class ResourceFactory
{
public:
    ~ResourceFactory();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
