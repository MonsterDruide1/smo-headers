#pragma once

namespace agl { namespace fx { 

class OcclusionRenderer
{
public:
    OcclusionRenderer();
    ~OcclusionRenderer();
    getOcclusionRate(int) const;
    getCoreOcclusionRate(int) const;
    initialize(int, sead::Heap*);
    calc();
    calcContext(int, sead::Matrix34<float> const&, sead::Matrix44<float> const&, float, float, float, float, sead::Vector2<float> const&, agl::fx::OcclusionRenderer::CalcResult*);
    updateGPU();
    updateViewGPU(int, agl::RenderBuffer const&);
    draw(agl::DrawContext*, int, agl::RenderTargetDepth const&) const;
    release(agl::DrawContext*, int) const;
    drawDebug(agl::DrawContext*, int, sead::Color4f const&, sead::Color4f const&, sead::Color4f const&) const;
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
};

} } 
