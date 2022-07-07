#pragma once

namespace nn { namespace atk { namespace detail { 

class BiquadFilterBpf512
{
public:
    GetCoefficients(nn::atk::BiquadFilterCoefficients*, int, float) const;
    ~BiquadFilterBpf512();
    CoefficientsTableSize;
    CoefficientsTable32000;
};

} } } 
