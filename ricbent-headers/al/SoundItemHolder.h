#pragma once

namespace al { 

class SoundItemHolder
{
public:
    SoundItemHolder();
    addNewLoadRequestEntry(unsigned int, unsigned int, al::IAudioResourceLoader*);
    tryFindEntry(unsigned int, al::IAudioResourceLoader*);
    waitLoadDoneAll();
    clearEntry();
};

} 
