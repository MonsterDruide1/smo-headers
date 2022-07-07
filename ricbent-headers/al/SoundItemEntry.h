#pragma once

namespace al { 

class SoundItemEntry
{
public:
    SoundItemEntry();
    load();
    setLoadRequestInfo(unsigned int, unsigned int, al::IAudioResourceLoader*);
    isLoadSuccess() const;
    getSoundItemId() const;
    clear();
};

} 
