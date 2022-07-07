#pragma once

namespace al { 

class AudioMaximizer
{
public:
    AudioMaximizer();
    clearHist_();
    UpdateSamples(int*, nn::atk::EffectAux::UpdateSamplesArg const&);
    updateBusDataImpl_(int, void**, int, float);
    calcHpfCoefs_(float);
    monoProcessHpf_(int*, int, al::AudioMaximizer::HpfHistChn*);
    monoProcessDist_(int*, int);
    monoProcessComp_(int*, int, al::AudioMaximizer::CompHistChn*, float, al::DspLinearValueController*, float*);
    ~AudioMaximizer();
};

} 
