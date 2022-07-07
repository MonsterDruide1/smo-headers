#pragma once

namespace al { 

class LightStreakDirector
{
public:
    LightStreakDirector(al::GraphicsSystemInfo*);
    ~LightStreakDirector();
    endInit();
    clearRequest();
    update();
    drawToRenderBuffer(agl::DrawContext*, int, agl::RenderBuffer const&, sead::Viewport const&, agl::TextureData const&) const;
    isEnable() const;
    updateUbo(int, int) const;
    drawMask(agl::DrawContext*, int, int, int, agl::TextureData const&, agl::TextureData const&) const;
    getCurrentParam() const;
    drawBlurMrt(agl::DrawContext*, int, int, int, agl::TextureData const&, agl::TextureData const&, int) const;
    composeBlurToBuffer(agl::DrawContext*, int, int, int, agl::RenderBuffer const&, sead::Viewport const&, agl::TextureData const&) const;
    requestParam(int, int, al::LightStreakParam const&);
    getCurrentParam();
};

} 
