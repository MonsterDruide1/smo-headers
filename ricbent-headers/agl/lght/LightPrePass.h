#pragma once

namespace agl { namespace lght { 

class LightPrePass
{
public:
    LightPrePass();
    ~LightPrePass();
    initialize(agl::lght::LightPrePass::CreateArg const&, sead::Heap*);
    changeTextureFilter_();
    updateSpecPowTex_();
    setUserLightMgr(int, agl::lght::LightPrePassLightMgrBase<agl::lght::LightPrePass::Context, agl::lght::LightPrePass::CallbackArg>*);
    calc();
    calcContext(int, sead::Camera const&, sead::Projection const&);
    calcContext_(int);
    calcContext(int, sead::Matrix34<float> const&, sead::Matrix44<float> const&, float, float, float, float, sead::Vector2<float> const&);
    updateGPU() const;
    updateViewGPU(int) const;
    createLightBuffer_(agl::DrawContext*, int, unsigned int, unsigned int, bool, bool) const;
    clearLightBuffer(agl::DrawContext*, int) const;
    bindLightBuffer(agl::DrawContext*, int, bool) const;
    draw(agl::DrawContext*, int, agl::TextureData const&, agl::RenderTargetDepth const&, agl::TextureData const&) const;
    applyGraphicsContext(agl::DrawContext*, agl::lght::LightPrePass::CallbackArg const&, bool, bool) const;
    drawDebug(agl::DrawContext*, int) const;
    release(int) const;
    setPointLight(int, sead::Vector3<float> const&, float, sead::Color4f const&, float, bool, sead::Color4f const&, float);
    getPointLightStruct(int);
    getPointLightStruct(int) const;
    setSpotLight(int, sead::Vector3<float> const&, sead::Vector3<float> const&, float, float, sead::Color4f const&, float, float, bool, sead::Color4f const&);
    setSpotLightShadowMap(int, int, agl::TextureSampler const*, sead::Matrix44<float> const&, bool);
    setSpotLightShadowType(int, agl::lght::LightPrePass::ShadowType, float);
    getSpotLightStruct(int);
    getSpotLightStruct(int) const;
    setProjLight(int, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Color4f const&, float, float, float, float, float, bool, sead::Color4f const&, agl::TextureSampler*, bool, sead::Vector2<float> const&, sead::Vector2<float> const&);
    setProjLight_Ortho(int, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Color4f const&, float, float, float, float, float, float, float, bool, sead::Color4f const&, agl::TextureSampler*, bool, sead::Vector2<float> const&, sead::Vector2<float> const&);
    setProjLightShadowMap(int, int, agl::TextureSampler const*, sead::Matrix44<float> const&, bool);
    setProjLightShadowType(int, agl::lght::LightPrePass::ShadowType, float);
    getProjLightStruct(int);
    getProjLightStruct(int) const;
    getSpotLightInfo(int, agl::lght::LightPrePass::LightInfo*) const;
    getProjLightInfo(int, agl::lght::LightPrePass::LightInfo*) const;
    setSpecularCurve(agl::utl::ParameterCurve<2u> const&);
    getShader(agl::lght::LightPrePass::LightType, bool, bool, bool, bool, agl::lght::LightPrePass::ShadowType, bool, bool);
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    InitializeShaderVariationTable_();
    GetShader_(agl::ShaderProgram const**, agl::lght::LightPrePass::LightType, bool, bool, bool, bool, agl::lght::LightPrePass::ShadowType, bool, bool);
    createPointLightUBO(agl::UniformBlock*, sead::Heap*);
    createSpotLightUBO(agl::UniformBlock*, sead::Heap*);
    createProjLightUBO(agl::UniformBlock*, sead::Heap*);
};

} } 
