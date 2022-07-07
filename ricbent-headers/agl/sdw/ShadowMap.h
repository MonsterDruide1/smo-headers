#pragma once

namespace agl { namespace sdw { 

class ShadowMap
{
public:
    ShadowMap();
    ~ShadowMap();
    free();
    initialize(agl::sdw::ShadowMap::CreateArg const&, sead::Heap*);
    initializeDepthSampler_(agl::TextureSampler*);
    allocDepthBuffer(agl::DrawContext*, int, int);
    freeFullOnly();
    freeHalf() const;
    freeQuat() const;
    freeFull_() const;
    freeDepth_() const;
    beginDepthBuffer(agl::DrawContext*, int, sead::Vector2<float> const&, sead::Vector2<float> const&);
    endDepthBuffer(agl::DrawContext*, int);
    drawReduce(agl::DrawContext*) const;
    drawVariance(agl::DrawContext*) const;
    setSize(sead::Vector2<int> const&);
    drawDebug(agl::DrawContext*, int, sead::Matrix44<float> const&, sead::Matrix34<float> const&, sead::Matrix44<float> const&);
    genMessage(sead::hostio::Context*);
    genMessageParameter(sead::hostio::Context*, sead::hostio::Node*);
    genMessageDebugParameter(sead::hostio::Context*, sead::hostio::Node*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    listenPropertyEventParameter(sead::hostio::PropertyEvent const*);
    listenPropertyEventDebugParameter(sead::hostio::PropertyEvent const*);
};

} } 
