#pragma once

namespace al { 

class RateParamV3f
{
public:
    RateParamV3f();
    setParam(sead::Vector3<float> const&, sead::Vector3<float> const&);
    getParam(sead::Vector3<float>*, sead::Vector3<float>*) const;
    calcLerpValue(sead::Vector3<float>*, float) const;
    calcEaseInValue(sead::Vector3<float>*, float) const;
    calcEaseOutValue(sead::Vector3<float>*, float) const;
    calcEaseInOutValue(sead::Vector3<float>*, float) const;
};

} 
