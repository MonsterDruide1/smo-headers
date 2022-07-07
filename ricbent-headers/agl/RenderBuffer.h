#pragma once

namespace agl { 

class RenderBuffer
{
public:
    RenderBuffer();
    initialize_();
    RenderBuffer(sead::Vector2<float> const&, sead::BoundBox2<float> const&);
    RenderBuffer(sead::Vector2<float> const&, float, float, float, float);
    ~RenderBuffer();
    setRenderTargetColorNullAll();
    adjustPhysicalAreaAndVirtualSizeFromColorTarget(unsigned int);
    invalidateGPUCache(agl::DrawContext*) const;
    bind_(agl::DrawContext*, unsigned short) const;
    bindImpl_(sead::DrawContext*) const;
    copyToDisplayBuffer(sead::DrawContext*, sead::DisplayBuffer const*) const;
    clear(sead::DrawContext*, unsigned int, sead::Color4f const&, float, unsigned int) const;
    clear(agl::DrawContext*, unsigned int, unsigned int, sead::Color4f const&, float, unsigned int) const;
    fastClear(agl::DrawContext*, unsigned int, unsigned int, sead::Color4f const&, float, unsigned int, sead::Viewport const&, bool) const;
    drawFlipYGL_(agl::DrawContext*, bool, bool) const;
    clearDrawQuad(agl::DrawContext*, unsigned int, unsigned int, sead::Color4f const&, float, unsigned int, bool) const;
    checkRenderState();
    initTextureDataFromBoundColor(agl::DrawContext*, agl::TextureData*, int);
    initTextureDataFromColor(agl::DrawContext*, agl::TextureData*, int) const;
    initTextureDataFromBoundDepth(agl::DrawContext*, agl::TextureData*);
    initTextureDataFromDepth(agl::DrawContext*, agl::TextureData*) const;
    copyTextureDataFromBoundColor(agl::DrawContext*, agl::TextureData const*, int);
    copyTextureDataFromColor(agl::DrawContext*, agl::TextureData const*, int) const;
    copyTextureDataFromBoundDepth(agl::DrawContext*, agl::TextureData const*);
    copyTextureDataFromDepth(agl::DrawContext*, agl::TextureData const*) const;
    checkValidTextureSize_(agl::TextureData const&, int) const;
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    sIsSRGBWrite;
};

} 
