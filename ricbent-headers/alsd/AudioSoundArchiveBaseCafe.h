#pragma once

namespace alsd { 

class AudioSoundArchiveBaseCafe
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    ~AudioSoundArchiveBaseCafe();
};

} 
