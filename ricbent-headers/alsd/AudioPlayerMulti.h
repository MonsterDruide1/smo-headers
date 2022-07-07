#pragma once

namespace alsd { 

class AudioPlayerMulti
{
public:
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    AudioPlayerMulti();
    ~AudioPlayerMulti();
    stopAll(int);
    initialize();
    finalize();
    isNwEnabled_() const;
    destroySoundHeap();
    shutdownDataManagement();
    calc();
    startSound(alsd::SoundHandle*, unsigned int);
    startSound(alsd::SoundHandle*, char const*);
    holdSound(alsd::SoundHandle*, unsigned int);
    holdSound(alsd::SoundHandle*, char const*);
    getSoundCount() const;
    getSoundName(unsigned int) const;
    getSoundId(char const*) const;
    pauseAll(int);
    setPauseAll_(int, bool);
    unpauseAll(int);
    detail_SetupSound(nn::atk::SoundHandle*, unsigned int, bool, char const*, nn::atk::SoundStartable::StartInfo const*);
    createSoundHeap(unsigned long, sead::Heap*);
    setupDataManagement(unsigned int, unsigned int, unsigned int, sead::Heap*, int);
    setupDataManagementInner_(nn::atk::SoundArchive const&, unsigned int, unsigned int, unsigned int, sead::Heap*, int);
    setupDataManagement(alsd::AudioPlayerMulti::DataManagementSetupParam const&);
    isPlayerBufferCrossingMemoryBoundary() const;
    isStreamBufferCrossingMemoryBoundary() const;
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
};

} 
