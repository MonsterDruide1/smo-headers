#pragma once

namespace alsd { 

class AudioMemorySoundArchiveCafe
{
public:
    AudioMemorySoundArchiveCafe(sead::Heap*);
    ~AudioMemorySoundArchiveCafe();
    open(void const*);
    close();
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
