#pragma once

namespace agl { namespace fctr { 

class GPUStressChecker
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    GPUStressChecker();
    initialize(sead::Heap*);
    calc();
    start(agl::DrawContext*) const;
    end(agl::DrawContext*) const;
    drawDebug(agl::DrawContext*, sead::FrameBuffer const&, sead::Viewport const&) const;
    drawDebug(sead::TextWriter*, float) const;
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    ~GPUStressChecker();
    sInstance;
};

} } 
