#pragma once

namespace al { 

class RenderBufferDepthAttacher
{
public:
    RenderBufferDepthAttacher(agl::DrawContext*, agl::RenderBuffer*, agl::TextureData const*, agl::ConstGPUMemVoidAddr const&, agl::TextureData const*, agl::TextureData const*, agl::TextureData const*, agl::TextureData const*);
    ~RenderBufferDepthAttacher();
};

} 
