#pragma once

namespace al { 

class HdrParam
{
public:
    HdrParam();
    isEqual(al::IUseRequestParam const&) const;
    copy(al::IUseRequestParam const&);
    copyInterp(al::IUseRequestParam const&, al::IUseRequestParam const&, float);
    getParamName() const;
    getParamObj();
    getParamObj() const;
};

} 
