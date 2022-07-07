#pragma once

namespace al { 

class EdgeDrawer
{
public:
    EdgeDrawer(al::ShaderHolder*, int);
    ~EdgeDrawer();
    endInit();
    clearRequest();
    update();
    requestParam(int, int, al::EdgeDrawParam const&);
    getCurrentParam() const;
    isEnable() const;
    draw(agl::DrawContext*, agl::RenderBuffer const*, agl::RenderBuffer const*, agl::TextureData const*, agl::TextureData const*, int, sead::Camera const&, float, float, bool) const;
    drawEdge(agl::DrawContext*, agl::RenderBuffer const*, agl::RenderBuffer const*, agl::TextureData const*, agl::TextureData const*, int, sead::Camera const&, float, float, bool) const;
    drawReduction(agl::DrawContext*, agl::RenderBuffer const&, agl::TextureData const*, int, bool) const;
    drawMix(agl::DrawContext*, agl::RenderBuffer const&, agl::TextureData const*) const;
};

} 
