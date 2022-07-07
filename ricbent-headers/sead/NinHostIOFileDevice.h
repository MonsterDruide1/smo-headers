#pragma once

namespace sead { 

class NinHostIOFileDevice
{
public:
    NinHostIOFileDevice();
    doIsAvailable_() const;
    formatPathForFS_(sead::BufferedSafeStringBase<char>*, sead::SafeStringBase<char> const&) const;
    ~NinHostIOFileDevice();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
