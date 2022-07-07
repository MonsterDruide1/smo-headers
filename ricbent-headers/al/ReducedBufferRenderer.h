#pragma once

namespace al { 

class ReducedBufferRenderer
{
public:
    ReducedBufferRenderer(al::ShaderHolder const*, al::FullScreenTriangle const*);
    ~ReducedBufferRenderer();
    freeReducedBuffer();
    freeReducedBufferHdr();
    createReducedBuffer(agl::DrawContext*, char const*, agl::TextureFormat, int, int);
    createReducedBufferHdr(agl::DrawContext*, char const*, agl::TextureFormat, int, int);
    drawReducedDepth(agl::DrawContext*, float, float, agl::RenderTargetDepth const&, agl::TextureData const*, agl::RenderTargetDepth const&, agl::TextureData const*) const;
    drawCompose(agl::DrawContext*, agl::TextureData const*, agl::TextureData const*, agl::TextureData const*, float, float, bool, bool) const;
    activateAdjustParam(agl::DrawContext*, agl::ShaderProgram const*, agl::TextureData const*, agl::TextureData const*) const;
};

} 
