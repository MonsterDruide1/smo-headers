#pragma once

namespace agl { namespace fx { namespace RadialBlur { 

class Context
{
public:
    initialize(int, sead::Heap*);
    calc(agl::fx::RadialBlur::SharedData const&, sead::Matrix34<float> const&, sead::Matrix44<float> const&);
    updateGPU();
    draw(agl::DrawContext*, int, agl::fx::RadialBlur::SharedData const&, agl::RenderBuffer const&, agl::TextureData const&) const;
    allocHalfBufferTexture(agl::DrawContext*, agl::TextureData const&) const;
    updateHalfBuffer(agl::DrawContext*, int, agl::fx::RadialBlur::SharedData const&, agl::RenderBuffer const&, agl::TextureData const&) const;
    draw2D(agl::DrawContext*, int, agl::fx::RadialBlur::SharedData const&, agl::RenderBuffer const&, agl::TextureData const&) const;
    freeHalfBufferTexture() const;
    allocReduceTexture(agl::DrawContext*, agl::TextureData const&) const;
    freeReduceTexture() const;
    Context();
    ~Context();
    drawToReduceTexture_(agl::DrawContext*, int, agl::fx::RadialBlur::BlurParameter const&, agl::fx::RadialBlur::SharedData const&, agl::fx::RadialBlur::Context::ScreenParameter const&, agl::TextureData const&) const;
    drawToRenderBuffer_(agl::DrawContext*, int, agl::fx::RadialBlur::BlurParameter const&, agl::fx::RadialBlur::SharedData const&, agl::fx::RadialBlur::Context::ScreenParameter const&) const;
};

} } } 
