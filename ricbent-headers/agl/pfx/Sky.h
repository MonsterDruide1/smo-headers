#pragma once

namespace agl { namespace pfx { 

class Sky
{
public:
    Sky();
    ~Sky();
    finalize();
    setUpShader(agl::ShaderProgramArchive*, sead::Heap*);
    initialize(agl::pfx::Sky::InitializeArg const&);
    allocateTexture(sead::Heap*);
    setBasisTextureImage(void const*, unsigned int);
    freeTexture();
    setBasisTextureImage(void const*, unsigned int, void const*, unsigned int, void const*, unsigned int);
    drawBasis(agl::DrawContext*, unsigned int);
    drawBasisImpl(agl::DrawContext*, unsigned int);
    drawContext(agl::DrawContext*, unsigned int, sead::Matrix34<float> const&, float, float);
    setUpRenderBuffer(agl::DrawContext*, unsigned int, agl::TextureData const*, unsigned int, unsigned int, unsigned int, unsigned int);
    invalidateRenderBufferCache(agl::DrawContext*, unsigned int);
    getRenderingParameterStatic(agl::pfx::Sky::RenderingParameterStatic*) const;
    setRenderingParameterStatic(agl::pfx::Sky::RenderingParameterStatic const&, bool);
    getRenderingParameter(agl::pfx::Sky::RenderingParameter*) const;
    setRenderingParameter(agl::pfx::Sky::RenderingParameter const&);
    getScatterFogParam(agl::pfx::Sky::ScatterFogParam*) const;
    setScatterFogParam(agl::pfx::Sky::ScatterFogParam const&);
    getAdhocFogParam(agl::pfx::Sky::AdhocFogParam*) const;
    setAdhocFogParam(agl::pfx::Sky::AdhocFogParam const&);
    getBakeInfoParam(agl::pfx::Sky::BakeInfoParam*, unsigned int) const;
    drawBoth(agl::DrawContext*, unsigned int, sead::Matrix44<float> const&, sead::Matrix34<float> const&, float, float, agl::TextureData const&, agl::TextureData const&, bool, float);
    drawSky(agl::DrawContext*, unsigned int, sead::Matrix44<float> const&, sead::Matrix34<float> const&, float, float, float);
    drawGround(agl::DrawContext*, unsigned int, sead::Matrix44<float> const&, sead::Matrix34<float> const&, float, float, agl::TextureData const&, agl::TextureData const&, bool, float);
    preWrite_() const;
    preRead_();
    postRead_();
    genMessage(sead::hostio::Context*);
    updateDirectionFromLatLong();
    updateDirectionToLatLong();
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
};

} } 
