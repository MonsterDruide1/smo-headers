#pragma once

namespace nn { namespace atk { 

class EffectAux
{
public:
    EffectAux();
    ResetChannelIndex();
    ~EffectAux();
    Initialize();
    Finalize();
    OnChangeOutputMode();
    GetRequiredMemSize(nn::audio::AudioRendererParameter const&) const;
    AddEffect(nn::audio::AudioRendererConfig*, nn::audio::AudioRendererParameter const&, nn::audio::FinalMixType*);
    SplitEffectBuffer(nn::atk::EffectAux::BufferSet*, void*, unsigned long);
    AddEffect(nn::audio::AudioRendererConfig*, nn::audio::AudioRendererParameter const&, nn::audio::SubMixType*);
    SetEffectInputOutput(signed char const*, signed char const*, int, int);
    RemoveEffect(nn::audio::AudioRendererConfig*, nn::audio::FinalMixType*);
    RemoveEffect(nn::audio::AudioRendererConfig*, nn::audio::SubMixType*);
    SetChannelCount(int);
    SetChannelIndex(nn::atk::ChannelIndex const*, int);
    GetChannelCount() const;
    GetChannelIndex(nn::atk::ChannelIndex*, int) const;
    SetAudioFrameCount(int);
    GetAudioFrameCount() const;
    IsRemovable() const;
    IsClearable();
    IsEnabled() const;
    SetEnabled(bool);
    SetEffectBuffer(void*, unsigned long);
    Update();
    ChannelCountMax;
};

} } 
