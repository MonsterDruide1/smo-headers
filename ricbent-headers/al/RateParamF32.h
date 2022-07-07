#pragma once

namespace al { 

class RateParamF32
{
public:
    RateParamF32();
    setParam(float, float);
    calcLerpValue(float) const;
    calcEaseInValue(float) const;
    calcEaseOutValue(float) const;
    calcEaseInOutValue(float) const;
};

} 
