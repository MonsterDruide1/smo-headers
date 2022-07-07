#pragma once

namespace al { 

class AudioEffectLevelDetector
{
public:
    AudioEffectLevelDetector();
    setParams(al::AudioEffectProcInfo const*);
    updateGameFrame();
    getCalcedAudioFrameRatio() const;
    GetRequiredMemSize();
    UpdateSamples(int*, nn::atk::EffectAux::UpdateSamplesArg const&);
    ~AudioEffectLevelDetector();
};

} 
