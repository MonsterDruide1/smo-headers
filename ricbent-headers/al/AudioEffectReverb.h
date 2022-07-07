#pragma once

namespace al { 

class AudioEffectReverb
{
public:
    AudioEffectReverb();
    setupDelayAllocateSizes_(al::AudioEffectReverbProcInfo const*);
    setupDelaySizes_(al::AudioEffectReverbProcInfo const*);
    setupGains_(al::AudioEffectReverbProcInfo const*);
    allocBuffer_();
    clearBuffer_();
    setParams(al::AudioEffectProcInfo const*);
    GetRequiredMemSize();
    UpdateSamples(int*, nn::atk::EffectAux::UpdateSamplesArg const&);
    updateFx2ch_(int*, int*, unsigned int);
    updateFx4ch_(int*, int*, int*, int*, unsigned int);
    updateFx6ch_(int*, int*, int*, int*, int*, int*, unsigned int);
    ~AudioEffectReverb();
};

} 
