#pragma once

namespace al { 

class DepthShadowMapDirector
{
public:
    DepthShadowMapDirector(al::GraphicsSystemInfo*, al::ExecuteDirector*, al::AreaObjDirector*);
    ~DepthShadowMapDirector();
    init();
    endInit();
    createDepthTexture(al::DepthShadowMapDirector::ShadowInfo*, bool);
    initAfterPlacement();
    registerUpdateDepthShadowMap(al::DepthShadowMapInfo*);
    removeUpdateDepthShadowMap(al::DepthShadowMapInfo*);
    movement();
    preDrawGraphics();
    isEnable() const;
    drawToMask(agl::DrawContext*, agl::RenderTargetDepth const*) const;
    drawDepthModel(agl::DrawContext*, al::DepthShadowMapCtrl const*) const;
    drawToDepthShadow(agl::DrawContext*, al::DepthShadowMapDirector::ShadowInfo*) const;
    drawBlur(agl::DrawContext*, agl::TextureData*, int, agl::RenderBuffer, agl::TextureData const*) const;
    drawToDepthShadowForStaticDepthShadow(agl::DrawContext*) const;
    isNeedUpdateStaticDepthShadowCurrentFrame() const;
    drawToDepthShadowForActor(agl::DrawContext*) const;
    drawToDepthShadow(agl::DrawContext*) const;
    drawToShadowPrePass(agl::DrawContext*, agl::RenderTargetDepth const*, agl::TextureData const*, agl::TextureSampler const*, al::DepthShadowMapDirector::ShadowInfo*) const;
    drawToShadowPrePass(agl::DrawContext*, int, al::GraphicsSystemInfo*, agl::sdw::ShadowPrePass*, agl::RenderTargetDepth const*, agl::TextureData const*, bool, bool, bool);
    freeDepthShadowMapMask() const;
    freeDepthShadowMap() const;
    createDepthShadowMap(al::DepthShadowMapCtrl const*, al::ModelKeeper const*, char const*, int, int, int);
    findIsInShade(sead::Vector3<float> const&) const;
    updateViewGpu(al::DepthShadowMapDirector::ShadowInfo*, sead::Camera const*, al::Projection const*);
    updateViewGpu(int, sead::Camera const*, al::Projection const*);
    updateDepthShadow(al::DepthShadowMapDirector::ShadowInfo*);
    clearRequest();
    tryActivateDepthShadowMapAndUbo(agl::DrawContext*, al::DepthShadowMapInfo*);
    activateDummyDepthShadowMapAndUbo(agl::DrawContext*);
};

} 
