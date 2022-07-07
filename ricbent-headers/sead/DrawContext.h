#pragma once

namespace sead { 

class DrawContext
{
public:
    DrawContext();
    ~DrawContext();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
