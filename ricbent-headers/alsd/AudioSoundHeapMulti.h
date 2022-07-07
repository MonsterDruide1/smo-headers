#pragma once

namespace alsd { 

class AudioSoundHeapMulti
{
public:
    AudioSoundHeapMulti(unsigned long, sead::Heap*);
    create_(unsigned long, sead::Heap*);
    ~AudioSoundHeapMulti();
    isCrossingMemoryBoundary() const;
    setSoundDataManagement(nn::atk::SoundDataManager&, nn::atk::SoundArchive&);
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    dump();
};

} 
