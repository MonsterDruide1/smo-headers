#pragma once

namespace al { 

class OccludedEffectRequestInfo
{
public:
    OccludedEffectRequestInfo(agl::fx::OfxLensFlareDynamic*, agl::fx::OccludedEffectMgr*, int);
    requestByPos(sead::Vector3<float> const&);
    setRotate(float);
};

} 
