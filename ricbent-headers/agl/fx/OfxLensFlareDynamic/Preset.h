#pragma once

namespace agl { namespace fx { namespace OfxLensFlareDynamic { 

class Preset
{
public:
    ~Preset();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    getTypeID() const;
    sTypeInfo;
};

} } } 
