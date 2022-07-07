#pragma once

namespace agl { namespace pfx { 

class FilterAA
{
public:
    FilterAA();
    ~FilterAA();
    freeSMAAResourceTextures();
    freeHistoryBuffer();
    initialize(agl::pfx::FilterAA::InitializeArg const&, sead::Heap*);
    allocHistoryBuffer(unsigned int, unsigned int, sead::Heap*);
    allocSMAAResourceTextures(sead::Heap*);
    hasSMAAResourceTextures() const;
    hasHistoryBuffer(unsigned int) const;
    calcLumaSampleOffset() const;
    stepFrame(unsigned int) const;
    calcProjectionJitter(unsigned int) const;
    calcProjectionJitter(unsigned int, sead::Vector2<float> const&) const;
    setDrawInfo(unsigned int, sead::Matrix44<float> const&, sead::Matrix34<float> const&, float, float);
    draw(agl::DrawContext*, unsigned int, agl::pfx::FilterAA::DrawArg const&) const;
    prepareHistoryBuffer_(unsigned int, unsigned int, agl::TextureFormat, sead::Vector2<float> const&) const;
    draw_(agl::DrawContext*, unsigned int, agl::pfx::FilterAA::DrawArg const&) const;
    draw(agl::DrawContext*, unsigned int, agl::RenderBuffer const&, agl::RenderBuffer const&, sead::Viewport const&) const;
    draw(agl::DrawContext*, unsigned int, agl::RenderBuffer const&, sead::Viewport const&, agl::TextureSampler const*, agl::TextureSampler const*, bool) const;
    draw(agl::DrawContext*, unsigned int, agl::RenderBuffer const&, sead::Viewport const&, agl::TextureSampler const*, agl::TextureSampler const*, bool, agl::TextureSampler const*) const;
    FXAA(agl::DrawContext*, unsigned int, agl::pfx::FilterAA::DrawArg const&) const;
    calcLuminanceMapParameter_(sead::Vector4<float>*, sead::Vector4<float>*, unsigned int, unsigned int, bool) const;
    drawLuminanceMap_(agl::DrawContext*, agl::TextureSampler const*, sead::Vector2<float> const&, unsigned int, unsigned int, bool, sead::Vector4<float> const&, sead::Vector4<float> const&) const;
    bindRenderBufferAndApplyViewport_(agl::DrawContext*, agl::pfx::FilterAA::DrawArg const&) const;
    FXAA(agl::DrawContext*, unsigned int, agl::RenderBuffer const&, sead::Viewport const&, agl::TextureSampler const*, agl::TextureSampler const*, bool, agl::TextureSampler const*) const;
    reprojection(agl::DrawContext*, unsigned int, agl::pfx::FilterAA::DrawArg const&) const;
    reprojection(agl::DrawContext*, unsigned int, agl::RenderBuffer const&, sead::Viewport const&, agl::TextureSampler const*, agl::TextureSampler const*, bool, agl::TextureSampler const*) const;
    ReduceAA(agl::DrawContext*, unsigned int, agl::pfx::FilterAA::DrawArg const&) const;
    ReduceAA(agl::DrawContext*, unsigned int, agl::RenderBuffer const&, sead::Viewport const&, agl::TextureSampler const*) const;
    SMAA(agl::DrawContext*, unsigned int, agl::pfx::FilterAA::DrawArg const&) const;
    drawLuminanceMap_(agl::DrawContext*, agl::TextureSampler const*, sead::Vector2<float> const&, unsigned int, unsigned int, bool) const;
    getHistoryBuffer_(unsigned int, unsigned int, int) const;
    SMAA(agl::DrawContext*, unsigned int, agl::RenderBuffer const&, sead::Viewport const&, agl::TextureSampler const*) const;
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    cDefaultLumaCoeff;
};

} } 
