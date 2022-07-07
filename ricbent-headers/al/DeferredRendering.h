#pragma once

namespace al { 

class DeferredRendering
{
public:
    DeferredRendering(al::GraphicsSystemInfo*, int);
    ~DeferredRendering();
    prepareRenderGBuffer(agl::DrawContext*, al::GBufferArray*, int, sead::Matrix34<float> const&, sead::Matrix44<float> const&, float, float, float, float, sead::Vector2<float> const&);
    endRenderGBuffer(agl::DrawContext*);
    drawLightPrePass(agl::DrawContext*, al::GBufferArray*, int, agl::RenderTargetDepth const&);
    drawLightPrePassReducedBuffer(agl::DrawContext*, al::GBufferArray*, int, agl::RenderTargetDepth const&, agl::TextureData const*);
    drawSSAO(agl::DrawContext*, int, agl::TextureData const*, sead::Matrix34<float> const&, sead::Matrix44<float> const&);
    drawDeferredShading(agl::DrawContext*, agl::RenderBuffer const&, sead::Viewport const&, al::ShadowDirector*, sead::Matrix34<float> const&, sead::Matrix44<float> const&, al::GBufferArray*, int, al::SkyFillType, al::SimpleModelEnv const*, agl::TextureData const*);
    prepareDeferredShading(agl::DrawContext*, sead::Matrix34<float> const&, sead::Matrix44<float> const&, al::GBufferArray*, int, al::ShadowDirector*, al::SimpleModelEnv const*, agl::TextureData const*);
    preDrawGraphics();
};

} 
