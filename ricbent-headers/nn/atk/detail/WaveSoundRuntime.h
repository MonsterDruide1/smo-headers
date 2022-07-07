#pragma once

namespace nn { namespace atk { namespace detail { 

class WaveSoundRuntime
{
public:
    WaveSoundRuntime();
    ~WaveSoundRuntime();
    Initialize(int, void**, void const*);
    Finalize();
    GetRequiredMemorySize(nn::atk::SoundArchive::SoundArchivePlayerInfo const&, int);
    GetActiveCount() const;
    GetFreeWaveSoundCount() const;
    SetupUserParam(void**, unsigned long);
    Update();
    AllocSound(unsigned int, int, int, nn::atk::detail::BasicSound::AmbientInfo*);
    PrepareImpl(nn::atk::SoundArchive const*, nn::atk::SoundDataManager const*, unsigned int, nn::atk::detail::WaveSound*, nn::atk::SoundArchive::SoundInfo const*, nn::atk::detail::StartInfoReader const&);
    DumpMemory(nn::atk::SoundArchive const*) const;
};

} } } 
