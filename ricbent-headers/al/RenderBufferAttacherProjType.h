#pragma once

namespace al { 

class RenderBufferAttacherProjType
{
public:
    RenderBufferAttacherProjType(agl::DrawContext*, agl::RenderBuffer*, agl::TextureData const*, agl::TextureData const*, agl::TextureData const*, agl::TextureData const*, agl::RenderTargetDepth const*);
    ~RenderBufferAttacherProjType();
};

} 
