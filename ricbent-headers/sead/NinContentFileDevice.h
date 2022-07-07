#pragma once

namespace sead { 

class NinContentFileDevice
{
public:
    NinContentFileDevice();
    ~NinContentFileDevice();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
