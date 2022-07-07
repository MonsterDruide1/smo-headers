#pragma once

namespace nn { namespace atk { namespace detail { 

class BiquadFilterHpfNw4fCompatible48k
{
public:
    GetCoefficients(nn::atk::BiquadFilterCoefficients*, int, float) const;
    ~BiquadFilterHpfNw4fCompatible48k();
    CoefficientsTable48000;
};

} } } 
