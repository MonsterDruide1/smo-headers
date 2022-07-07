#pragma once

namespace al { 

class GBufferArray
{
public:
    GBufferArray(agl::RenderTargetDepth const*, al::GraphicsSystemInfo const*);
    ~GBufferArray();
    freeGBuf(int);
    allocGBuffer(agl::DrawContext*, int);
    clearGBuffer(agl::DrawContext*);
    createLightBufferAndCalcContext(agl::DrawContext*, agl::lght::LightPrePass*, int, int, int, sead::Camera const&, al::Projection const*);
    getGBufLightBuffer() const;
    getGBufNrmWorld() const;
    getGBufDepthView() const;
    getGBufBaseColor() const;
    getGBufMotionVec() const;
    getGBufLightBufferTex() const;
    getGBufNrmWorldTex() const;
    getGBufDepthViewTex() const;
    getGBufBaseColorTex() const;
    getGBufMotionVecTex() const;
    activateSamplerLightBuffer(agl::DrawContext*, agl::SamplerLocation const&, bool) const;
    activateSamplerNrmWolrd(agl::DrawContext*, agl::SamplerLocation const&, bool) const;
    activateSamplerDepthView(agl::DrawContext*, agl::SamplerLocation const&, bool) const;
    activateSamplerBaseColor(agl::DrawContext*, agl::SamplerLocation const&, bool) const;
    activateSamplerMotionVec(agl::DrawContext*, agl::SamplerLocation const&, bool) const;
    freeGBufNrmWorld();
    freeGBufDepthView();
    freeGBufBaseColor();
    freeGBufMotionVec();
    bindRenderBuffer(agl::DrawContext*, int);
    bindRenderBufferLightBuf(agl::DrawContext*);
    bindRenderBufferAndContextMRT(agl::DrawContext*);
};

} 
