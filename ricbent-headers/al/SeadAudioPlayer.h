#pragma once

namespace al { 

class SeadAudioPlayer
{
public:
    SeadAudioPlayer(al::AudioSoundArchiveInfo*, al::IAudioResourceInfoAccessor*);
    init();
    loadSoundItem(sead::SafeStringBase<char> const&, unsigned int);
    loadSoundItem(unsigned int, unsigned int);
    isLoadedSoundItem(unsigned int, unsigned int) const;
    startAudio(al::AcLSoundHandle*, unsigned int);
    getSoundType(unsigned int) const;
    getSoundArchive() const;
    getItemType(unsigned int) const;
    getSoundArchive(char const*) const;
    readSequenceSoundInfo(nn::atk::SoundArchive::SequenceSoundInfo*, unsigned int) const;
    getBankInfoSize(unsigned int) const;
    getBankWaveArcSize(unsigned int) const;
    getWaveArcSize(unsigned int) const;
    getSoundItemSize(unsigned int) const;
    getBankTotalSize(unsigned int) const;
    getSequenceSoundSize(unsigned int) const;
    getSoundPlayerCount() const;
    getSoundPlayerIdFromIndex(int);
    getAudioResourceVolume(unsigned int) const;
    setSoundPlayerVolume(char const*, float);
    getSoundPlayerVolume(char const*);
    isWaveSound(char const*) const;
    isStreamSound(char const*) const;
    isSequenceSound(char const*) const;
    isStereoWaveSound(unsigned int) const;
    getSeadAudioSoundHeap() const;
    trySetSoundMemoryPoolHandler(al::SoundMemoryPoolHandler*);
    tryGetSoundMemoryPoolHandler(char const*);
    tryGetSoundMemoryPoolHandlerByFilePath(char const*);
    removeSoundMemoryPoolHandler(al::SoundMemoryPoolHandler*);
    addAddonSoundArchive(al::SoundMemoryPoolHandler*);
    removeAddonSoundArchive(al::SoundMemoryPoolHandler*);
    addMainSoundArchiveToHolder(char const*);
    isLoadedArchive(char const*);
    isLoadedResource(char const*, char const*);
    ~SeadAudioPlayer();
};

} 
