#pragma once

namespace al { 

class ShadowMaskDrawer
{
public:
    ShadowMaskDrawer(al::ShadowMaskDirector*, int);
    isDraw() const;
    draw() const;
    drawShadowMask(agl::DrawContext*, int, agl::RenderTargetDepth const*, agl::RenderTargetDepth const*, agl::TextureData const*) const;
    drawToTextureData(agl::DrawContext*, agl::TextureData const*, agl::TextureData const*, agl::RenderTargetDepth const*) const;
    execute();
    ~ShadowMaskDrawer();
};

} 
