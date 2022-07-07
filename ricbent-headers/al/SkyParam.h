#pragma once

namespace al { 

class SkyParam
{
public:
    SkyParam();
    isEqual(al::IUseRequestParam const&) const;
    getRotate() const;
    getSkyName() const;
    getStarIntensity() const;
    getParamName() const;
    getParamObj();
    getParamObj() const;
};

} 
