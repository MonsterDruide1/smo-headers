#pragma once

namespace nn { namespace atk { namespace detail { 

class BiquadFilterHpf
{
public:
    GetCoefficients(nn::atk::BiquadFilterCoefficients*, int, float) const;
    ~BiquadFilterHpf();
    CoefficientsTableSize;
    CoefficientsTable32000;
};

} } } 
