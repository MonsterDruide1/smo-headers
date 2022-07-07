#pragma once

namespace nn { namespace atk { 

class EffectDelay
{
public:
    GetChannelSettingCountMax() const;
    EffectDelay();
    ResetChannelIndex();
    ~EffectDelay();
    GetRequiredMemSize() const;
    GetDelayTimeMax() const;
    GetDefaultDelayTimeMax();
    GetDefaultDelayTime();
    AddEffect(nn::audio::AudioRendererConfig*, nn::audio::FinalMixType*);
    AddEffect(nn::audio::AudioRendererConfig*, nn::audio::SubMixType*);
    SetEffectInputOutput(signed char const*, signed char const*, int, int);
    RemoveEffect(nn::audio::AudioRendererConfig*, nn::audio::FinalMixType*);
    RemoveEffect(nn::audio::AudioRendererConfig*, nn::audio::SubMixType*);
    IsRemovable() const;
    IsClearable();
    GetChannelMode() const;
    SetChannelMode(nn::atk::EffectBase::ChannelMode);
    SetChannelIndex(nn::atk::ChannelIndex const*, nn::atk::EffectBase::ChannelMode);
    GetChannelIndex(nn::atk::ChannelIndex*, int) const;
    SetDelayTimeMax(nn::TimeSpan);
    GetDelayTime() const;
    SetDelayTime(nn::TimeSpan);
    GetInGain() const;
    SetInGain(float);
    GetFeedbackGain() const;
    SetFeedbackGain(float);
    GetDryGain() const;
    SetDryGain(float);
    GetLowPassAmount() const;
    SetLowPassAmount(float);
    GetChannelSpread() const;
    SetChannelSpread(float);
    IsEnabled() const;
    SetEnabled(bool);
    ChannelSettingCountMax;
    InGainMin;
    InGainMax;
    FeedbackGainMin;
    FeedbackGainMax;
    DryGainMin;
    DryGainMax;
    LowPassAmountMin;
    LowPassAmountMax;
    ChannelSpreadMin;
    ChannelSpreadMax;
    DefaultDelayTimeMaxMilliSeconds;
    DefaultDelayTimeMilliSeconds;
    DefaultInGain;
    DefaultFeedbackGain;
    DefaultDryGain;
    DefaultLowPassAmount;
    DefaultChannelSpread;
};

} } 
