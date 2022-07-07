#pragma once

namespace al { 

class RumbleCalculatorCosMultLinear
{
public:
    RumbleCalculatorCosMultLinear(float, float, float, unsigned int);
    calcValues(sead::Vector3<float>*, sead::Vector3<float> const&);
};

} 
