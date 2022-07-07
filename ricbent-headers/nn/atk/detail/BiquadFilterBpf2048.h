#pragma once

namespace nn { namespace atk { namespace detail { 

class BiquadFilterBpf2048
{
public:
    GetCoefficients(nn::atk::BiquadFilterCoefficients*, int, float) const;
    ~BiquadFilterBpf2048();
    CoefficientsTableSize;
    CoefficientsTable32000;
};

} } } 
