#pragma once

namespace nn { namespace atk { namespace detail { 

class AdvancedWaveSoundRuntime
{
public:
    AdvancedWaveSoundRuntime();
    ~AdvancedWaveSoundRuntime();
    Initialize(int, void**, void const*);
    Finalize();
    GetRequiredMemorySize(nn::atk::SoundArchive::SoundArchivePlayerInfo const&, unsigned long);
    GetFreeAdvancedWaveSoundCount() const;
    SetupUserParam(void**, unsigned long);
    Update();
    AllocSound(unsigned int, int, int, nn::atk::detail::BasicSound::AmbientInfo*);
    PrepareImpl(nn::atk::SoundArchive const*, nn::atk::SoundDataManager const*, unsigned int, nn::atk::detail::AdvancedWaveSound*, nn::atk::SoundArchive::SoundInfo const*, nn::atk::detail::StartInfoReader const&);
    DumpMemory(nn::atk::SoundArchive const*) const;
};

} } } 
