#pragma once

namespace sead { 

class NinSaveFileDevice
{
public:
    NinSaveFileDevice(sead::SafeStringBase<char> const&);
    tryCommit();
    ~NinSaveFileDevice();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
