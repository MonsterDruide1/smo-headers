#pragma once

namespace agl { namespace pfx { 

class FlareFilter
{
public:
    FlareFilter();
    ~FlareFilter();
    initialize(int, sead::Heap*);
    initializeContext(agl::pfx::FlareFilter::Context*, sead::Heap*);
    calc();
    calcView(int, agl::cull::ViewFrustumCulling const&);
    calcGPU() const;
    calcViewGPU(int) const;
    draw(agl::DrawContext*, int, agl::RenderBuffer const&, sead::Viewport const&, agl::TextureData const&, int, int) const;
    drawToFlareBuffer(agl::DrawContext*, int, agl::TextureData const&, int, int) const;
    drawCopy_(agl::DrawContext*, agl::pfx::FlareFilter::Tex const&, agl::pfx::FlareFilter::Tex const&, bool, bool, bool, float, float, sead::Color4f const&) const;
    releaseFlareBuffer(int) const;
    drawBlur_(agl::DrawContext*, agl::pfx::FlareFilter::Tex const&, agl::pfx::FlareFilter::Tex const&, int, bool, bool, float, sead::Color4f const&) const;
    drawDebug(agl::DrawContext*, int) const;
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
};

} } 
