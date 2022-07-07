#pragma once

namespace al { 

class GraphicsParamRequesterImpl
{
public:
    GraphicsParamRequesterImpl(agl::utl::IParameterIO*, char const*);
    endInit();
    clearRequest();
    updateRequest();
    calcRate() const;
    requestParam(int, int, void*);
    requestParamDirect(int, void*);
    isRequested() const;
};

} 
