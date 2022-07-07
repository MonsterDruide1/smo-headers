#pragma once

namespace agl { namespace fx { 

class OfxBase
{
public:
    OfxBase();
    ~OfxBase();
    initialize(int, sead::Heap*);
    initializeOfx(agl::fx::OfxBase::CreateArg const&, int, agl::fx::OfxBase::PresetBase const*, sead::Heap*, agl::fx::OccludedEffectMgr*);
    initializePreset(agl::fx::OfxBase::PresetBase*, agl::fx::OfxBase::PresetBase::CreateArg const&, int, sead::Heap*);
    getOfxTypeID() const;
    calc();
    loadPresetByName(sead::SafeStringBase<char> const&, bool);
    loadPresetByIndex(int, bool);
    calcContext(int, sead::Matrix34<float> const&, sead::Matrix44<float> const&, float, float, float, float, sead::Vector2<float> const&);
    updateGPU();
    updateViewGPU(int, agl::RenderBuffer const&);
    draw(agl::DrawContext*, int, agl::RenderBuffer const&, sead::Viewport const&, agl::RenderTargetDepth const&) const;
    drawDebugOfx(agl::DrawContext*, int) const;
    getOcclusionRate(int) const;
    setEnable(bool);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    genMessage(sead::hostio::Context*);
    genMessageSimple(sead::hostio::Context*);
    listenPropertyEventSimple(sead::hostio::PropertyEvent const*);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    getOfxName() const;
    getOfxLabel() const;
    genMessageImpl_(sead::hostio::Context*);
    listenPropertyEventImpl_(sead::hostio::PropertyEvent const*);
};

} } 
