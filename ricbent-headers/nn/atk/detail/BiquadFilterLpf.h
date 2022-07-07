#pragma once

namespace nn { namespace atk { namespace detail { 

class BiquadFilterLpf
{
public:
    GetCoefficients(nn::atk::BiquadFilterCoefficients*, int, float) const;
    ~BiquadFilterLpf();
    CoefficientsTableSize;
    CoefficientsTable32000;
};

} } } 
