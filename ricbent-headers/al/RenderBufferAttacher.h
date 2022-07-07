#pragma once

namespace al { 

class RenderBufferAttacher
{
public:
    RenderBufferAttacher(agl::DrawContext*, agl::RenderBuffer*, agl::TextureData const*, agl::TextureData const*, agl::TextureData const*, agl::TextureData const*, agl::RenderTargetDepth const*);
    RenderBufferAttacher(agl::DrawContext*, agl::RenderBuffer*, sead::Viewport const*, agl::TextureData const*, agl::TextureData const*, agl::TextureData const*, agl::TextureData const*, agl::RenderTargetDepth const*);
    RenderBufferAttacher(agl::DrawContext*, agl::RenderBuffer*, int, agl::TextureData const*, agl::TextureData const*, agl::TextureData const*, agl::TextureData const*, agl::RenderTargetDepth const*);
    ~RenderBufferAttacher();
    invalidateGpuCacheWrite(agl::DrawContext*);
};

} 
