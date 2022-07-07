#pragma once

namespace al { 

class HdrCompose
{
public:
    isUsingAutoExposure() const;
    getCurrentParam() const;
    getExposure() const;
    getExposureExp() const;
    HdrCompose(int, al::GraphicsSystemInfo*);
    ~HdrCompose();
    clearRequest();
    update();
    getCurrentParam();
    requestParam(int, int, al::HdrParam const&);
    preDrawGraphics();
    initHdrParam(al::HdrParam*);
    findCameraEffectIndex(char const*) const;
    setupTexture(al::CameraEffect*);
    endInit();
    isValidCameraMask(al::HdrParam const*) const;
    getCameraEffect(al::HdrParam const*) const;
    isValidCameraIndirect(al::HdrParam const*) const;
    isValidCameraIndirect2(al::HdrParam const*) const;
    isCurrentValidCameraMask() const;
    isCurrentValidCameraIndirect() const;
    isCurrentValidCameraIndirect2() const;
    isCurrentValidCameraMaskBloom() const;
    isCurrentValidCameraMaskLightStreak() const;
    isCurrentValidCameraMaskGodRay() const;
    initProjectResource(al::Resource const*, char const*);
    setupComposeBuffer(agl::DrawContext*, int, agl::RenderBuffer const&);
    isAtLeastOneCompose(int) const;
    isAtLeastOneComposeMask(int) const;
    getRenderBufferFlareFilter() const;
    getRenderBufferBloom() const;
    getRenderBufferGodRay() const;
    getRenderBufferLightStreak() const;
    getAutoExposureTexrureSampler(int) const;
    releaseComposeBuffer();
    calcGPU(int);
    activateAutoExposure(agl::DrawContext*, int, agl::SamplerLocation const&) const;
    draw(agl::DrawContext*, al::ViewInfo const&, agl::RenderBuffer const&, sead::Viewport const&, agl::TextureData const&, agl::TextureData const*, agl::TextureData const*, agl::TextureData const*, float, float) const;
};

} 
