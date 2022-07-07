#pragma once

namespace agl { namespace lght { 

class SSII
{
public:
    SSII();
    ~SSII();
    free();
    initialize(int, sead::Heap*);
    applyQualitySetting_();
    calcView(int, agl::cull::ViewFrustumCulling const&);
    calcGPU();
    calcViewGPU(int);
    draw(agl::DrawContext*, int, agl::RenderBuffer const&, sead::Viewport const&, agl::TextureData const&, agl::TextureData const&, agl::TextureData const&, agl::TextureData const&) const;
    draw_(agl::DrawContext*, int, agl::RenderBuffer const*, agl::RenderBuffer const*, sead::Viewport const&, agl::TextureData const*, agl::TextureData const*, agl::TextureData const*, agl::TextureData const*, agl::TextureData const*) const;
    draw(agl::DrawContext*, int, agl::RenderBuffer const&, agl::RenderBuffer const&, sead::Viewport const&, agl::TextureData const&, agl::TextureData const&, agl::TextureData const&, agl::TextureData const&) const;
    draw(agl::DrawContext*, int, agl::RenderBuffer const&, sead::Viewport const&, agl::TextureData const&, agl::TextureData const&) const;
    draw(agl::DrawContext*, int, agl::RenderBuffer const&, agl::RenderBuffer const&, sead::Viewport const&, agl::TextureData const&, agl::TextureData const&) const;
    drawAlbedoMode(agl::DrawContext*, int, agl::RenderBuffer const&, sead::Viewport const&, agl::TextureData const&, agl::TextureData const&, agl::TextureData const&, agl::TextureData const&, bool) const;
    allocReprojectionBuffer_(agl::DrawContext*, int) const;
    drawReduce_(agl::DrawContext*, int, int, agl::RenderBuffer const&, agl::TextureSampler const&, bool) const;
    drawReduceWithPreRender_(agl::DrawContext*, int, int, agl::RenderBuffer const&, agl::TextureSampler const&, agl::TextureSampler const&) const;
    drawSSII_(agl::DrawContext*, int, agl::lght::SSII::RedBufRenderSetting const&, agl::RenderBuffer const&, sead::Viewport const&, agl::lght::SSII::ReduceBuffer const&, agl::lght::SSII::ReduceBuffer const&, bool) const;
    drawRef_(agl::DrawContext*, int, float, int, int, agl::RenderBuffer const&, sead::Viewport const&, agl::lght::SSII::ReduceBuffer const&, agl::lght::SSII::ReduceBuffer const&, agl::lght::SSII::ReduceBuffer const&) const;
    drawAntiHowling_(agl::DrawContext*, int, agl::RenderBuffer const&, agl::TextureSampler const&, agl::TextureSampler const&) const;
    drawExpand_(agl::DrawContext*, int, agl::RenderBuffer const&, agl::TextureSampler const&, agl::TextureSampler const&, agl::TextureSampler const&, agl::TextureSampler const&, agl::TextureSampler const&, agl::TextureSampler const*, agl::TextureSampler const*, int, bool) const;
    setReprojectionBuffer(agl::DrawContext*, int, agl::TextureData const&) const;
    drawDebug(agl::DrawContext*, int) const;
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
};

} } 
