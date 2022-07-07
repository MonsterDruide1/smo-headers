#pragma once

namespace nn { namespace atk { namespace detail { 

class BiquadFilterBpf1024
{
public:
    GetCoefficients(nn::atk::BiquadFilterCoefficients*, int, float) const;
    ~BiquadFilterBpf1024();
    CoefficientsTableSize;
    CoefficientsTable32000;
};

} } } 
