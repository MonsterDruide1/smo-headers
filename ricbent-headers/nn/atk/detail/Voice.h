#pragma once

namespace nn { namespace atk { namespace detail { 

class Voice
{
public:
    Voice();
    ~Voice();
    Initialize(unsigned int);
    IsAvailable() const;
    AllocVoice(unsigned int);
    Free();
    SetPriority(unsigned int);
    SetState(nn::atk::detail::VoiceState);
    AppendWaveBuffer(nn::atk::WaveBuffer*);
    FreeAllWaveBuffer();
    UpdateParam();
    GetPlayPosition() const;
    SetMonoFilter(bool, unsigned short);
    SetBiquadFilter(bool, nn::atk::BiquadFilterCoefficients const*);
    PriorityMin;
    PriorityMax;
    PriorityNoDrop;
};

} } } 
