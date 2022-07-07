#pragma once

namespace agl { namespace sdw { 

class ShadowPrePass
{
public:
    ShadowPrePass();
    ~ShadowPrePass();
    initialize(int, sead::Heap*);
    calc();
    calcGPU() const;
    calcGPU(int, sead::Matrix34<float> const&, sead::Matrix44<float> const&, sead::Matrix44<float> const*, float*, float, float, float, float, agl::cull::ViewFrustumCulling const&) const;
    calcGPU_StaticDepthShadow(int, sead::Matrix44<float> const*, sead::Matrix34<float> const&);
    createShadowBuffer_core(agl::DrawContext*, int, unsigned int, unsigned int, bool) const;
    release(int) const;
    getPassType() const;
    clearShadowBuffer(agl::DrawContext*, int) const;
    getPrevSampler(agl::DrawContext*, int, int) const;
    getRenderTarget(agl::DrawContext*, int, int) const;
    bindBuffer(agl::DrawContext*, int, int) const;
    getBufferState(int) const;
    createShadowBuffer(agl::DrawContext*, int, unsigned int, unsigned int) const;
    draw(agl::DrawContext*, int, agl::RenderTargetDepth const*, agl::RenderTargetDepth const*, agl::TextureData const*, agl::TextureData const*, agl::TextureSampler const*, int) const;
    drawShadowPrePass(agl::DrawContext*, agl::sdw::ShadowPrePass::Context const&, agl::TextureSampler const&, agl::TextureSampler const&, agl::TextureSampler const&, int, agl::TextureSampler const*, bool, int, int) const;
    drawBlurQuad(agl::DrawContext*, agl::sdw::ShadowPrePass::Context const&, int, int, agl::TextureSampler const&, agl::TextureSampler const&) const;
    drawPost(agl::DrawContext*, agl::sdw::ShadowPrePass::Context const&, agl::TextureSampler const&, agl::TextureSampler const&, bool, bool) const;
    drawMipLevelBlur(agl::DrawContext*, int, agl::sdw::ShadowPrePass::Context const&) const;
    getPcfShaderNo() const;
    getShaderIndex(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) const;
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
};

} } 
