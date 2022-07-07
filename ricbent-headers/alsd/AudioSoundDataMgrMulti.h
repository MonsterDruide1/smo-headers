#pragma once

namespace alsd { 

class AudioSoundDataMgrMulti
{
public:
    AudioSoundDataMgrMulti();
    ~AudioSoundDataMgrMulti();
    connectSoundHeap(alsd::AudioSoundHeapMulti*);
    isNwEnabled_() const;
    getSoundArchive() const;
    setContentRootPath(char const*);
    mountSoundArchiveFromFs(sead::SafeStringBase<char> const&, sead::Heap*, bool, bool);
    setupManager_(sead::Heap*);
    mountSoundArchiveFromMemory(void const*, sead::Heap*);
    unmountSoundArchive();
    loadData(unsigned int, unsigned int, unsigned int, alsd::AudioSoundHeapMulti*);
    tryGetDefaultSoundHeapAndCheckReady_(alsd::AudioSoundHeapMulti**) const;
    loadData(char const*, unsigned int, unsigned int, alsd::AudioSoundHeapMulti*);
};

} 
