#pragma once

namespace al { 

class DepthShadowMapInfo
{
public:
    DepthShadowMapInfo(char const*);
    setShadowTextureSize(int, int);
    getDepthShadowMapCtrl();
};

} 
