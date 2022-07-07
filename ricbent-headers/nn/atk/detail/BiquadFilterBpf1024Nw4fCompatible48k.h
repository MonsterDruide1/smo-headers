#pragma once

namespace nn { namespace atk { namespace detail { 

class BiquadFilterBpf1024Nw4fCompatible48k
{
public:
    GetCoefficients(nn::atk::BiquadFilterCoefficients*, int, float) const;
    ~BiquadFilterBpf1024Nw4fCompatible48k();
    CoefficientsTable48000;
};

} } } 
