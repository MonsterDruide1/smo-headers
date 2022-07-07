#pragma once

namespace al { 

class GodRayParam
{
public:
    GodRayParam();
    isEqual(al::IUseRequestParam const&) const;
    copy(al::IUseRequestParam const&);
    copyInterp(al::IUseRequestParam const&, al::IUseRequestParam const&, float);
    isEnable() const;
    getColor() const;
    isEnableThreshold() const;
    getBlendType() const;
    setWorldDirection(sead::Vector3<float> const&);
    getParamName() const;
    getParamObj();
    getParamObj() const;
};

} 
