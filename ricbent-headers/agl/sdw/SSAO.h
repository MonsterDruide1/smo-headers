#pragma once

namespace agl { namespace sdw { 

class SSAO
{
public:
    SSAO();
    ~SSAO();
    initialize(int, sead::Heap*);
    initRotateTexture_(bool);
    initSphereVolume_(int, bool);
    drawToAOBuffer(agl::DrawContext*, int, int, int, agl::TextureData const&, sead::Matrix34<float> const&, sead::Matrix44<float> const&) const;
    drawToAOBuffer_(agl::DrawContext*, int, int, int, agl::TextureData const&, float, float, bool, sead::Matrix44<float> const&) const;
    drawToAOBuffer(agl::DrawContext*, int, int, int, agl::TextureData const&, float, float) const;
    release(int);
    drawReduceDepth_(agl::DrawContext*, int, agl::TextureData const&) const;
    drawAO_(agl::DrawContext*, int, int, int, float, float, bool, sead::Matrix44<float> const&) const;
    drawBlur_(agl::DrawContext*, int, int, int, bool) const;
    drawBack_(agl::DrawContext*, int, agl::RenderBuffer const&) const;
    genMessage(sead::hostio::Context*);
    genMessageParameter(sead::hostio::Context*, sead::hostio::Node*);
    genMessageDebugParameter(sead::hostio::Context*, sead::hostio::Node*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    listenPropertyEventParameter(sead::hostio::PropertyEvent const*);
    listenPropertyEventDebugParameter(sead::hostio::PropertyEvent const*);
    postRead_();
};

} } 
