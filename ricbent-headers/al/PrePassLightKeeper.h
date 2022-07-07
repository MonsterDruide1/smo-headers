#pragma once

namespace al { 

class PrePassLightKeeper
{
public:
    isForceReducedBufferRequest();
    PrePassLightKeeper(al::GraphicsSystemInfo*, int);
    ~PrePassLightKeeper();
    initShader(al::ShaderHolder*);
    endInit();
    clear();
    pushBackLight(al::PrePassLightBase*);
    eraseLight(al::PrePassLightBase*);
    execute(al::ShadowDirector*);
    preDrawGraphics();
    updateViewGPU(int, al::ShadowDirector*);
    requestPointLight(sead::Vector3<float> const&, float, sead::Color4f const&, float, bool);
    requestSpotLight(sead::Vector3<float> const&, sead::Vector3<float> const&, float, float, sead::Color4f const&, float, float, bool);
    requestProjLight(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Color4f const&, float, float, float, float, float, bool, agl::TextureSampler*, bool, sead::Vector2<float> const&, sead::Vector2<float> const&);
    requestProjLightOrtho(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Color4f const&, float, float, float, float, float, float, float, bool, agl::TextureSampler*, bool, sead::Vector2<float> const&, sead::Vector2<float> const&);
    requestLineLight(sead::Vector3<float> const&, sead::Vector3<float> const&, float, sead::Color4f const&, float, bool);
    requestCausticsLight(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Quat<float> const&, sead::Color4f const&, sead::Vector3<float> const&, float, float, float, bool);
    drawLpp(agl::DrawContext*, int, al::GBufferArray const*, agl::RenderTargetDepth const&, agl::TextureData const*) const;
    drawLppReducedBuffer(agl::DrawContext*, int, al::GBufferArray const*, agl::RenderTargetDepth const&, agl::TextureData const*) const;
};

} 
