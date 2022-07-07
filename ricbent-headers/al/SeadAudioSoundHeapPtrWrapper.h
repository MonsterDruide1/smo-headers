#pragma once

namespace al { 

class SeadAudioSoundHeapPtrWrapper
{
public:
    SeadAudioSoundHeapPtrWrapper();
    setSoundHeap(alsd::AudioSoundHeapMulti*);
    saveHeapState();
    loadHeapState(int);
    alloc(unsigned long);
    getCurrentHeapStateLevel() const;
    getHeapSize() const;
    getHeapFreeSize() const;
    dumpHeap(nn::atk::SoundDataManager*, nn::atk::SoundArchive*);
};

} 
