#pragma once

namespace al { 

class DirLightParam
{
public:
    DirLightParam();
    isEqual(al::IUseRequestParam const&) const;
    getDirectionFrom() const;
    copy(al::IUseRequestParam const&);
    copyInterp(al::IUseRequestParam const&, al::IUseRequestParam const&, float);
    getColor() const;
    setColor(sead::Color4f const&);
    setDirectionFrom(sead::Vector3<float> const&);
    getParamName() const;
    getParamObj();
    getParamObj() const;
};

} 
