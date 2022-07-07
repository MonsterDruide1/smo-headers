#pragma once

namespace al { 

class VignettingDrawer
{
public:
    VignettingDrawer(al::ShaderHolder*, al::PlayerHolder const*, al::SceneCameraInfo const*);
    ~VignettingDrawer();
    endInit();
    clearRequest();
    update();
    requestParam(int, int, al::VignettingParam const&);
    draw(agl::DrawContext*, agl::RenderBuffer const&) const;
    getCurrentParam() const;
    isEnableBlur() const;
    allocBuffer(agl::DrawContext*, agl::TextureData const&, al::VignettingParam const*) const;
    drawBlur(agl::DrawContext*, agl::TextureData*, agl::TextureData const&, al::VignettingParam const*) const;
    drawCompose(agl::DrawContext*, agl::TextureData*, agl::RenderBuffer const&, al::VignettingParam const*) const;
    freeBuffer(agl::TextureData*) const;
    isEnableColor() const;
    drawVignetting(agl::DrawContext*, agl::RenderBuffer const&, al::VignettingParam const*) const;
    drawBlurMap(agl::DrawContext*, agl::TextureData const&) const;
    freeBlurMap() const;
    setupCompose(agl::DrawContext*, agl::ShaderProgram const*);
};

} 
