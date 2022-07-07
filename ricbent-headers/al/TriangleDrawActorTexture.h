#pragma once

namespace al { 

class TriangleDrawActorTexture
{
public:
    TriangleDrawActorTexture(char const*, char const*);
    TriangleDrawActorTexture(int, int);
    setWrapU(agl::TextureWrapType);
    setWrapV(agl::TextureWrapType);
    activate(agl::DrawContext*, agl::SamplerLocation const&);
};

} 
