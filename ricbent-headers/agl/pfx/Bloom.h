#pragma once

namespace agl { namespace pfx { 

class Bloom
{
public:
    Bloom();
    ~Bloom();
    initialize(int, sead::Heap*);
    initializeContext(agl::pfx::Bloom::Context*, sead::Heap*);
    update();
    calcGPU() const;
    calcGPU(int) const;
    setNearFar(int, float, float);
    draw(agl::DrawContext*, int, agl::pfx::Bloom::DrawArg const&) const;
    draw_(agl::DrawContext*, int, agl::pfx::Bloom::DrawArg const&, bool) const;
    drawToBloomBuffer(agl::DrawContext*, int, agl::pfx::Bloom::DrawArg const&) const;
    drawTexture_(agl::DrawContext*, agl::ShaderProgram const&, agl::TextureSampler const&) const;
    drawDetect_(agl::DrawContext*, int, bool) const;
    drawGaussian_(agl::DrawContext*, int, int, float) const;
    drawGather_(agl::DrawContext*, agl::TextureSampler const&, sead::Color4f const&, sead::Color4f const&) const;
    drawShaft_(agl::DrawContext*, int) const;
    drawDepthDepth_(agl::DrawContext*, int, int, agl::RenderBuffer const&) const;
    releaseBloomBuffer(int) const;
    postRead_();
    callbackNotAppliable_(agl::utl::IParameterObj*, agl::utl::ParameterBase*, agl::utl::ResParameterObj);
    callbackInvalidVersion_(agl::utl::ResParameterArchive);
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
};

} } 
