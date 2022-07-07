#pragma once

namespace al { 

class LightMapNormalMap
{
public:
    LightMapNormalMap(al::LightMapNormalMap::NormalMapType, int, agl::ShaderProgram const*);
    ~LightMapNormalMap();
    calcGpu();
    draw(agl::DrawContext*) const;
};

} 
