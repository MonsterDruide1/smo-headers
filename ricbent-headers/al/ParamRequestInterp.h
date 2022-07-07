#pragma once

namespace al { 

class ParamRequestInterp
{
public:
    ParamRequestInterp();
    calcRate() const;
    clearRequest();
    endInit();
    isRequested() const;
    requestParam(int, int, al::IUseRequestParam const&);
    requestParamDirect_(int, al::IUseRequestParam const&);
    updateInterp();
};

} 
