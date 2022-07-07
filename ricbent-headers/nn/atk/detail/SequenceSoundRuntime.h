#pragma once

namespace nn { namespace atk { namespace detail { 

class SequenceSoundRuntime
{
public:
    SequenceSoundRuntime();
    ~SequenceSoundRuntime();
    Initialize(int, void**, void const*);
    Finalize();
    SetupSequenceTrack(int, void**, void const*);
    SetupUserParam(void**, unsigned long);
    GetRequiredMemorySize(nn::atk::SoundArchive::SoundArchivePlayerInfo const&, int);
    GetRequiredSequenceTrackMemorySize(nn::atk::SoundArchive::SoundArchivePlayerInfo const&, int);
    IsSoundArchiveAvailable() const;
    GetActiveCount() const;
    GetFreeCount() const;
    SetSequenceSkipIntervalTick(int);
    GetSequenceSkipIntervalTick();
    Update();
    AllocSound(unsigned int, int, int, nn::atk::detail::BasicSound::AmbientInfo*);
    PrepareImpl(nn::atk::detail::SoundArchiveManager::SnapShot const&, unsigned int, nn::atk::detail::SequenceSound*, nn::atk::SoundArchive::SoundInfo const*, nn::atk::detail::StartInfoReader const&);
    SetupSequenceSoundInfo(nn::atk::SoundArchive::SequenceSoundInfo*, unsigned int, nn::atk::SoundArchive const&, nn::atk::SoundStartable::StartInfo::SequenceSoundInfo const*);
    SetupSequenceSoundFile(nn::atk::detail::SequenceSoundRuntime::PrepareContext*, nn::atk::detail::SequenceSound const&, nn::atk::SoundArchive const&, nn::atk::SoundDataManager const&, nn::atk::SoundArchive::SoundInfo const&, nn::atk::SoundStartable::StartInfo::SequenceSoundInfo const*);
    SetupBankFileAndWaveArchiveFile(nn::atk::detail::SequenceSoundRuntime::PrepareContext*, nn::atk::detail::SequenceSound const&, nn::atk::SoundArchive::SequenceSoundInfo const&, nn::atk::detail::SoundArchiveManager::SnapShot const&, nn::atk::SoundStartable::StartInfo::SequenceSoundInfo const*);
    SetupSequenceSoundPlayerStartInfo(nn::atk::detail::driver::SequenceSoundPlayer::StartInfo*, unsigned int, nn::atk::detail::StartInfoReader const&);
    DumpMemory(nn::atk::SoundArchive const*) const;
    SetupBankFileAndWaveArchiveFileFromHook(nn::atk::detail::SequenceSoundRuntime::PrepareContext*, nn::atk::detail::SequenceSound const&, nn::atk::SoundArchive const&);
};

} } } 
