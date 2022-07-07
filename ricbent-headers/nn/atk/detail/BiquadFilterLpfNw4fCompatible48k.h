#pragma once

namespace nn { namespace atk { namespace detail { 

class BiquadFilterLpfNw4fCompatible48k
{
public:
    GetCoefficients(nn::atk::BiquadFilterCoefficients*, int, float) const;
    ~BiquadFilterLpfNw4fCompatible48k();
    CoefficientsTable48000;
};

} } } 
