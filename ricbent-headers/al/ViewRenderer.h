#pragma once

namespace al { 

class ViewRenderer
{
public:
    ViewRenderer(al::GraphicsSystemInfo*, al::ExecuteDirector*, al::EffectSystem*, al::SceneCameraInfo*);
    ~ViewRenderer();
    clearRequest();
    calcView(int, sead::Camera const*, al::Projection const*);
    preDrawGraphics();
    drawView(int, al::DrawSystemInfo*, al::Projection const&, sead::Camera const&, agl::RenderBuffer const*, sead::Viewport const&, bool, bool, bool) const;
    drawView(al::ViewInfo const&, al::DrawSystemInfo*, al::Projection const&, sead::Camera const&, agl::RenderBuffer const*, sead::Viewport const&, bool, bool, bool) const;
    drawSystem(al::GraphicsRenderInfo const&) const;
    drawMirror(agl::DrawContext*, int, al::RenderVariables*) const;
    drawHdr(al::GraphicsRenderInfo const&, al::RenderVariables const&, bool, bool) const;
    captureIndirectTexture(agl::DrawContext*, agl::TextureData const*, agl::TextureData const*) const;
    startForwardPlayerScreenFader(int, int, float);
    endForwardPlayerScreenFader(int);
};

} 
