#pragma once

namespace al { 

class FogDirector
{
public:
    FogDirector(al::ShaderHolder*, al::CubeMapDirector*, al::NoiseTextureKeeper*, al::GraphicsInitArg const&);
    ~FogDirector();
    endInit();
    clearRequest();
    update();
    getFogNoiseTexCrdVelocity() const;
    getYFogNoiseTexCrdVelocity() const;
    getCausticsTexCrdYSpeed() const;
    updateViewGpu(sead::Camera const*);
    trySetCameraYPos(sead::Camera const*);
    getFogStart() const;
    getFogColor() const;
    getFogSlope() const;
    getFogMax() const;
    getYFogColor() const;
    getYFogSlope() const;
    getYFogStart() const;
    getYFogMax() const;
    getYFogDistnaceScale() const;
    isRequestedFog() const;
    getFogSkyMip() const;
    getYFogSkyMip() const;
    getFogNoiseTexCrdScale() const;
    getYFogNoiseTexCrdScale() const;
    getFogNoiseIntensity() const;
    getYFogNoiseIntensity() const;
    getFogNoiseDistCoef() const;
    getYFogNoiseDistCoef() const;
    getCausticsStart() const;
    getCausticsPower() const;
    getCausticsTexCrdScale() const;
    getCausticsIntensity() const;
    getCausticsTexCrdScaleY() const;
    isInWater() const;
    setupDeferredFog(agl::DrawContext*, agl::ShaderProgram const*) const;
    activateCubeMap(agl::DrawContext*, agl::ShaderProgram const*) const;
    drawFog(agl::DrawContext*, agl::TextureData const*, agl::RenderTargetDepth const*, agl::TextureData const*, bool) const;
    isRequestedYFog() const;
    isBlendMult() const;
    isDeferredYFog() const;
    isDeferredFog() const;
    isApplySky() const;
    isApplySkyDefault() const;
    getYFogDistnaceSlope() const;
    isUseDepthTgt() const;
    getYFogBlendType() const;
    requestFogParam(int, int, al::FogParam const&);
    requestYFogParam(int, int, al::YFogParam const&);
    getCurrentFogParam() const;
    getCurrentYFogParam() const;
    onConnectCollision();
    getCurrentYFogParam();
    setBaseOffset(float);
    getCurrentFogParam();
};

} 
