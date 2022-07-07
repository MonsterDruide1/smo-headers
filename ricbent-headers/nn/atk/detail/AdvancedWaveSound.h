#pragma once

namespace nn { namespace atk { namespace detail { 

class AdvancedWaveSound
{
public:
    AdvancedWaveSound(nn::atk::detail::SoundInstanceManager<nn::atk::detail::AdvancedWaveSound>&);
    ~AdvancedWaveSound();
    Initialize();
    Finalize();
    Prepare(nn::atk::detail::driver::AdvancedWaveSoundPlayer::PrepareParameter const&);
    OnUpdatePlayerPriority();
    IsAttachedTempSpecialHandle();
    DetachTempSpecialHandle();
    IsPrepared() const;
    GetBasicSoundPlayerHandle();
};

} } } 
