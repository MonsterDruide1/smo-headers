#pragma once

namespace al { 

class DepthShadowClipParam
{
public:
    DepthShadowClipParam();
    applyClipPlane(agl::sdw::DepthShadow*) const;
    getClipAreaObj() const;
    getParamName() const;
    getParamObj();
    getParamObj() const;
};

} 
