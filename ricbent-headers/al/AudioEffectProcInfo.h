#pragma once

namespace al { 

class AudioEffectProcInfo
{
public:
    createInfo(al::ByamlIter const&);
    duplicateInfo(al::AudioEffectProcInfo const&);
    compareInfo(al::AudioEffectProcInfo const*, al::AudioEffectProcInfo const*);
    getChannelMode(al::ByamlIter const&);
    getSampleRate(al::ByamlIter const&);
    getChannelModeByStr(nn::atk::EffectBase::ChannelMode);
    getSampleRateByStr(nn::atk::EffectBase::SampleRate);
    AudioEffectProcInfo();
    AudioEffectProcInfo(al::AudioEffectProcInfo const&);
    ~AudioEffectProcInfo();
    dummy();
};

} 
