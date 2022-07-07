#pragma once

namespace agl { namespace fx { 

class OfxLensFlare
{
public:
    OfxLensFlare();
    ~OfxLensFlare();
    getOcclusionRate(int) const;
    initializeImpl_(agl::fx::OfxBase::CreateArg const&, sead::Heap*);
    updateImpl_();
    calcContextImpl_(int, agl::fx::OfxBase::Context const&, agl::fx::OfxBase::UpdateViewGPUArg const&);
    updateGPUImpl_();
    updateViewGPUImpl_(int, agl::fx::OfxBase::Context const&, agl::fx::OfxBase::UpdateViewGPUArg const&);
    drawImpl_(agl::DrawContext*, int, agl::RenderBuffer const&, sead::Viewport const&, agl::fx::OfxBase::Context const&, agl::fx::OcclusionRenderer const&) const;
    genMessageImpl_(sead::hostio::Context*);
    listenPropertyEventImpl_(sead::hostio::PropertyEvent const*);
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    getTypeID() const;
    drawDebugImpl_(agl::DrawContext*, int, agl::fx::OfxBase::Context const&) const;
    getMaxElementNum() const;
    sTypeInfo;
};

} } 
