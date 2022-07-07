#pragma once

namespace alsd { 

class AudioFsSoundArchiveCafe
{
public:
    AudioFsSoundArchiveCafe(sead::Heap*);
    ~AudioFsSoundArchiveCafe();
    open(void const*);
    close();
    setLoadLabelString(bool);
    setContentRootPath(char const*);
    setFileAccessInFunction(bool);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
};

} 
