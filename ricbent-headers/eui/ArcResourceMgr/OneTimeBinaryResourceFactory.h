#pragma once

namespace eui { namespace ArcResourceMgr { 

class OneTimeBinaryResourceFactory
{
public:
    newResource_(sead::Heap*, int);
    ~OneTimeBinaryResourceFactory();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} } 
