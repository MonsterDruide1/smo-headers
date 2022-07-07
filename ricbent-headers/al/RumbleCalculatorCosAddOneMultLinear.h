#pragma once

namespace al { 

class RumbleCalculatorCosAddOneMultLinear
{
public:
    RumbleCalculatorCosAddOneMultLinear(float, float, float, unsigned int);
    calcValues(sead::Vector3<float>*, sead::Vector3<float> const&);
};

} 
