#pragma once

namespace nn { namespace atk { 

class SoundArchivePlayer
{
public:
    detail_GetItemId(char const*);
    detail_GetItemId(char const*, char const*);
    SoundArchivePlayer();
    ~SoundArchivePlayer();
    IsAvailable() const;
    Initialize(nn::atk::SoundArchive const*, nn::atk::SoundDataManager const*, void*, unsigned long, void*, unsigned long, unsigned long);
    Initialize(nn::atk::SoundArchivePlayer::InitializeParam const&);
    Finalize();
    StopAllSound(int, bool);
    DisposeInstances();
    GetRequiredMemSize(nn::atk::SoundArchive const*);
    GetRequiredMemSize(nn::atk::SoundArchive const*, unsigned long, int);
    GetRequiredMemSize(nn::atk::SoundArchive const*, unsigned long);
    GetRequiredMemSize(nn::atk::SoundArchivePlayer::InitializeParam const&);
    GetRequiredStreamInstanceSize(nn::atk::SoundArchive const*);
    GetRequiredStreamBufferSize(nn::atk::SoundArchive const*) const;
    GetRequiredStreamBufferTimes(nn::atk::SoundArchive const*) const;
    GetRequiredStreamCacheSize(nn::atk::SoundArchive const*, unsigned long);
    SetupMram(nn::atk::SoundArchive const*, void*, unsigned long, unsigned long, int, void*, unsigned long);
    SetupSoundPlayer(nn::atk::SoundArchive const*, void**, void const*);
    SetupAddonSoundArchiveContainer(int, void**, void const*);
    SetupUserParamForBasicSound(nn::atk::SoundArchive::SoundArchivePlayerInfo const&, void**, void const*, unsigned long);
    CreatePlayerHeap(void**, void const*, unsigned long);
    Update();
    GetSoundPlayer(unsigned int);
    GetSoundArchive() const;
    GetAddonSoundArchive(char const*) const;
    GetAddonSoundArchive(int) const;
    GetAddonSoundArchiveName(int) const;
    GetAddonSoundArchiveAddTick(int) const;
    GetAddonSoundDataManager(char const*) const;
    GetSoundPlayer(unsigned int) const;
    GetSoundPlayer(char const*);
    GetSoundPlayer(char const*) const;
    detail_GetFileAddress(unsigned int) const;
    AddAddonSoundArchive(char const*, nn::atk::AddonSoundArchive const*, nn::atk::SoundDataManager const*);
    RemoveAddonSoundArchive(nn::atk::AddonSoundArchive const*);
    detail_SetupSound(nn::atk::SoundHandle*, unsigned int, bool, char const*, nn::atk::SoundStartable::StartInfo const*);
    detail_SetupSoundImpl(nn::atk::SoundHandle*, unsigned int, nn::atk::detail::BasicSound::AmbientInfo*, nn::atk::SoundActor*, bool, char const*, nn::atk::SoundStartable::StartInfo const*);
    IsSoundArchiveFileHooksEnabled() const;
    LockSoundArchiveFileHooks();
    IsSequenceSoundEdited(char const*) const;
    IsStreamSoundEdited(char const*) const;
    IsWaveSoundEdited(char const*) const;
    EnableHook(nn::atk::SoundArchive const*, bool);
    PreprocessSinglePlay(nn::atk::SoundArchive::SoundInfo const&, unsigned int, nn::atk::SoundPlayer&);
    SetCommonSoundParam(nn::atk::detail::BasicSound*, nn::atk::SoundArchive::SoundInfo const*);
    UnlockSoundArchiveFileHooks();
    SetSequenceUserProcCallback(void (*)(unsigned short, nn::atk::SequenceUserProcCallbackParam*, void*), void*);
    SetSequenceSkipIntervalTick(int);
    GetSequenceSkipIntervalTick();
    ReadWaveSoundDataInfo(nn::atk::WaveSoundDataInfo*, unsigned int, nn::atk::SoundArchive const*, nn::atk::SoundDataManager const*) const;
    ReadWaveSoundDataInfo(nn::atk::WaveSoundDataInfo*, unsigned int, char const*) const;
    ReadWaveSoundDataInfo(nn::atk::WaveSoundDataInfo*, char const*, char const*) const;
    ReadWaveSoundDataInfo(nn::atk::WaveSoundDataInfo*, unsigned int) const;
    ReadWaveSoundDataInfo(nn::atk::WaveSoundDataInfo*, char const*) const;
    ReadStreamSoundDataInfo(nn::atk::StreamSoundDataInfo*, nn::atk::SoundArchive const*, unsigned int) const;
    ReadStreamSoundDataInfo(nn::atk::StreamSoundDataInfo*, unsigned int, char const*) const;
    ReadStreamSoundDataInfo(nn::atk::StreamSoundDataInfo*, char const*, char const*) const;
    ReadStreamSoundDataInfo(nn::atk::StreamSoundDataInfo*, unsigned int) const;
    ReadStreamSoundDataInfo(nn::atk::StreamSoundDataInfo*, char const*) const;
    GetRequiredWorkBufferSizeToReadStreamSoundHeader();
    ReadStreamSoundRegionDataInfo(nn::atk::StreamSoundRegionDataInfo*, unsigned int, char const* const*, int, nn::atk::SoundArchive const*, void*, unsigned long) const;
    ReadStreamSoundRegionDataInfo(nn::atk::StreamSoundRegionDataInfo*, unsigned int, char const*, void*, unsigned long) const;
    ReadStreamSoundRegionDataInfo(nn::atk::StreamSoundRegionDataInfo*, unsigned int, char const* const*, int, void*, unsigned long, char const*) const;
    ReadStreamSoundRegionDataInfo(nn::atk::StreamSoundRegionDataInfo*, char const*, char const*, void*, unsigned long) const;
    ReadStreamSoundRegionDataInfo(nn::atk::StreamSoundRegionDataInfo*, char const*, char const* const*, int, void*, unsigned long, char const*) const;
    ReadStreamSoundRegionDataInfo(nn::atk::StreamSoundRegionDataInfo*, unsigned int, char const* const*, int, void*, unsigned long) const;
    ReadStreamSoundRegionDataInfo(nn::atk::StreamSoundRegionDataInfo*, char const*, char const* const*, int, void*, unsigned long) const;
    ReadStreamSoundRegionDataInfo(nn::atk::StreamSoundRegionDataInfo*, char const*, char const*, void*, unsigned long, char const*) const;
    ReadStreamSoundRegionDataInfo(nn::atk::StreamSoundRegionDataInfo*, unsigned int, char const*, void*, unsigned long, char const*) const;
    DumpMemory() const;
    ReadStreamSoundInstanceState(nn::atk::SoundArchivePlayer::StreamSoundInstanceState*) const;
    BufferAlignSize;
    StreamBufferTimesMax;
    UserParamBoundary;
};

} } 
