#pragma once

namespace nn { namespace atk { 

class EffectBase
{
public:
    EffectBase();
    ~EffectBase();
    AddEffect(nn::audio::AudioRendererConfig*, nn::audio::FinalMixType*);
    AddEffect(nn::audio::AudioRendererConfig*, nn::audio::SubMixType*);
    SetEffectInputOutput(signed char const*, signed char const*, int, int);
    RemoveEffect(nn::audio::AudioRendererConfig*, nn::audio::FinalMixType*);
    RemoveEffect(nn::audio::AudioRendererConfig*, nn::audio::SubMixType*);
    OnChangeOutputMode();
    SetEffectBuffer(void*, unsigned long);
    ConvertChannelModeToInt(nn::atk::EffectBase::ChannelMode);
    UpdateBuffer(int, void**, unsigned long, nn::atk::SampleFormat, int, nn::atk::OutputMode);
    GetSampleRate() const;
    SetSampleRate(nn::atk::EffectBase::SampleRate);
    GetChannelIndex(nn::atk::ChannelIndex*, int) const;
    GetChannelSettingCountMax() const;
    ChannelModeCountMax;
};

} } 
