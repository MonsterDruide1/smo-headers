#pragma once

namespace al { 

class ShadowDirector
{
public:
    ShadowDirector(int, al::GraphicsSystemInfo*, al::AreaObjDirector*, al::ExecuteDirector*, al::EffectSystem*, al::SceneCameraInfo*, al::PlayerHolder const*);
    ~ShadowDirector();
    initShader(al::ShaderHolder*);
    endInit();
    initAfterPlacement();
    clearRequest();
    update();
    getCurrentShadowParam();
    getCurrentClipParam();
    isUsingShadowCamera() const;
    preDrawGraphics();
    isEnableShadowPrePass() const;
    updateViewGpu(int, sead::Camera const*, al::Projection const*);
    getDepthShadow();
    drawShadowPrePass(agl::DrawContext*, int, agl::RenderTargetDepth const*, agl::RenderTargetDepth const*, agl::TextureData const*);
    getShadowPrePassSampler(int) const;
    getShadowPrePassTexture(int) const;
    isEnableDepthShadow() const;
    getCurrentShadowParam() const;
    getCurrentClipParam() const;
    getCurrentNear() const;
    getCurrentFar() const;
    requestParam(int, int, al::DepthShadowParam const&);
    requestParam(int, int, al::DepthShadowClipParam const&);
};

} 
