#pragma once

namespace agl { namespace fx { 

class OccludedEffectMgr
{
public:
    OccludedEffectMgr();
    ~OccludedEffectMgr();
    initialize(agl::fx::OccludedEffectMgr::CreateArg const&, sead::Heap*);
    createVtxStream_(sead::Heap*);
    loadBinary(void*, unsigned int, sead::SafeStringBase<char> const&);
    loadOriginalResource_();
    loadFile(sead::SafeStringBase<char> const&, sead::Heap*);
    releaseResource();
    calc();
    constructHostIO_();
    calcView(int, sead::Matrix34<float> const&, sead::Matrix44<float> const&, float, float, float, float, sead::Vector2<float> const&);
    updateGPU();
    updateViewGPU(int, agl::RenderBuffer const&) const;
    draw(agl::DrawContext*, int, agl::RenderBuffer const&, sead::Viewport const&, agl::RenderTargetDepth const&) const;
    drawDebug(agl::DrawContext*, int) const;
    setEnableAll(bool);
    saveSetting(int, sead::SafeStringBase<char> const&, sead::BufferedSafeStringBase<char>*) const;
    loadSetting(void const*, unsigned int, sead::SafeStringBase<char> const*, bool);
    initTexturePlacement_();
    updateTexturePlacement_();
    searchPresetByName(int, sead::SafeStringBase<char> const&) const;
    getPresetByIndex(int, int) const;
    loadSettingFromFile();
    getVertexAttrQuad(agl::VertexAttribute*, sead::Heap*) const;
    getVertexAttrQuadDouble(agl::VertexAttribute*, sead::Heap*) const;
    getVertexAttrOctagon(agl::VertexAttribute*, sead::Heap*) const;
    getVertexAttrOctagonDouble(agl::VertexAttribute*, sead::Heap*) const;
    mountRawDir_(bool, bool, bool);
    setInstanceParameterAll(int, sead::SafeStringBase<char> const&, agl::utl::ParameterBase const&);
    updateInstancePresetAll(int, sead::SafeStringBase<char> const&);
    setInstanceDebugDrawAll(int, sead::SafeStringBase<char> const&, bool);
    setInstanceDebugDrawColorAll(int, sead::SafeStringBase<char> const&, sead::Color4f const&, sead::Color4f const&, sead::Color4f const&);
    genMessageTextureSelect(sead::hostio::Context*, int*, char const*);
    genMessage(sead::hostio::Context*);
    getCurrRes_() const;
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    genMessageMenuInstance(sead::hostio::Context*);
    listenPropertyEventMenuInstance(sead::hostio::PropertyEvent const*);
};

} } 
