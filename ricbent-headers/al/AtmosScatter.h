#pragma once

namespace al { 

class AtmosScatter
{
public:
    AtmosScatter(al::GraphicsSystemInfo*, int);
    ~AtmosScatter();
    getRgKm() const;
    getRtKm() const;
    getSunIntensity() const;
    getSamplerTransmittance() const;
    getSamplerCloudTex() const;
    initStageResource(al::Resource const*, char const*, char const*);
    initProjectResource();
    clearRequest();
    requestSunDegree(float, float);
    requestSunDirection(sead::Vector3<float> const&, float);
    requestSunDirDirect(sead::Vector3<float> const&);
    requestMoonDirection(sead::Vector3<float> const&, float);
    requestMoonDirDirect(sead::Vector3<float> const&);
    updateAtmosScatter();
    updateSunDirDegree();
    preDrawGraphics();
    calcInfo(sead::Vector3<float>*, sead::Vector3<float>*, sead::Vector3<float>*, sead::Vector3<float>*) const;
    drawPrecompute(agl::DrawContext*) const;
    drawFarForward(agl::DrawContext*, int, al::SimpleModelEnv*) const;
    drawFar(agl::DrawContext*, int, al::SimpleModelEnv*, al::RenderType) const;
    drawFarToCubeMap(agl::DrawContext*, int, al::SimpleModelEnv*) const;
    drawFarDeferred(agl::DrawContext*, int, al::GBufferArray*, al::SimpleModelEnv*) const;
    drawDirLightColor(agl::DrawContext*, sead::Color4f const&, agl::TextureData const*) const;
    onApplyParam() const;
};

} 
