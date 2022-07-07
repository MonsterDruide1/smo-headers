#pragma once

namespace agl { namespace pfx { 

class AutoExposure
{
public:
    AutoExposure();
    ~AutoExposure();
    initialize(int, sead::Heap*);
    calc();
    calcGPU() const;
    calcGPU(int) const;
    setCommonShaderParam(agl::DrawContext*, agl::ShaderProgram const*) const;
    draw(agl::DrawContext*, int, agl::RenderBuffer const&, agl::TextureData const*) const;
    drawHistogram(agl::DrawContext*, int, agl::RenderBuffer const&, agl::TextureData const*) const;
    drawHistogramCalc(agl::DrawContext*, int, agl::RenderBuffer const&, agl::TextureData const*) const;
    drawSimple(agl::DrawContext*, int, agl::RenderBuffer const&, agl::TextureData const*) const;
    drawDebug(agl::DrawContext*, int, agl::RenderBuffer const&, agl::TextureData const*) const;
    drawHistogramDebugVertex(agl::DrawContext*, int, agl::RenderBuffer const&, agl::TextureData const*) const;
    drawHistogramDebug(agl::DrawContext*, int) const;
    enableSingleChannel(bool, agl::TextureCompSel);
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
};

} } 
