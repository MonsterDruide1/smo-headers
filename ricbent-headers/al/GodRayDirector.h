#pragma once

namespace al { 

class GodRayDirector
{
public:
    GodRayDirector(al::GraphicsSystemInfo*, al::SceneCameraInfo const*);
    ~GodRayDirector();
    endInit();
    clearRequest();
    update();
    requestParam(int, int, al::GodRayParam const&);
    isEnable() const;
    getCurrentParam() const;
    getBlurQuality() const;
    getComposeColor() const;
    draw(agl::DrawContext*, int, agl::RenderTargetDepth const&, agl::TextureData const&, sead::Matrix34<float> const&, sead::Matrix44<float> const&, al::SimpleModelEnv const*, al::ExecuteDirector*) const;
    drawMask(agl::DrawContext*, int, sead::Vector2<float> const&, agl::TextureData const&, agl::TextureData const&, agl::TextureData*, al::SimpleModelEnv const*, al::ExecuteDirector*) const;
    drawBlur(agl::DrawContext*, int, agl::TextureData*, char const*, sead::Vector2<float> const&, agl::TextureData const*) const;
    composeToRenderBuffer(agl::DrawContext*, int, agl::RenderBuffer const&, sead::Viewport const&) const;
    composeBlur(agl::DrawContext*, agl::TextureData*, agl::RenderBuffer const&, sead::Viewport const&) const;
    releaseBuffer();
    getCurrentParam();
    drawBlur_(agl::DrawContext*, agl::TextureData*, agl::TextureData const&, sead::Vector2<float> const&) const;
};

} 
