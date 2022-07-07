#pragma once

namespace agl { namespace fx { 

class RadialBlur
{
public:
    RadialBlur();
    ~RadialBlur();
    initialize(int, int, sead::Heap*);
    initVertex_(int, int, sead::Heap*);
    initIndex_(int, int, sead::Heap*);
    calc();
    calcView(int, sead::Matrix34<float> const&, sead::Matrix44<float> const&);
    updateGPU();
    updateViewGPU(int);
    draw(agl::DrawContext*, int, agl::RenderBuffer const&, agl::TextureData const&) const;
    draw2D(agl::DrawContext*, int, agl::RenderBuffer const&, agl::TextureData const&, agl::TextureData const&) const;
    allocReduceTexture(agl::DrawContext*, int, agl::TextureData const&) const;
    freeReduceTexture(int) const;
    genMessage(sead::hostio::Context*);
};

} } 
