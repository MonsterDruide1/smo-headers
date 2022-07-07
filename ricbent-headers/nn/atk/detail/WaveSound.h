#pragma once

namespace nn { namespace atk { namespace detail { 

class WaveSound
{
public:
    WaveSound(nn::atk::detail::SoundInstanceManager<nn::atk::detail::WaveSound>&);
    Initialize();
    Finalize();
    Prepare(void const*, void const*, nn::atk::detail::driver::WaveSoundPlayer::StartInfo const&, signed char);
    RegisterDataLoadTask(nn::atk::detail::driver::WaveSoundLoader::LoadInfo const&, nn::atk::detail::driver::WaveSoundPlayer::StartInfo const&);
    SetChannelPriority(int);
    InitializeChannelParam(int, bool);
    OnUpdatePlayerPriority();
    IsAttachedTempSpecialHandle();
    DetachTempSpecialHandle();
    ReadWaveSoundDataInfo(nn::atk::WaveSoundDataInfo*) const;
    GetPlaySamplePosition(bool) const;
    GetRuntimeTypeInfo() const;
    ~WaveSound();
    IsPrepared() const;
    GetBasicSoundPlayerHandle();
    OnUpdateParam();
};

} } } 
