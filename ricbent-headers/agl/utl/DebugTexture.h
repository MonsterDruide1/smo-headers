#pragma once

namespace agl { namespace utl { 

class DebugTexture
{
public:
    initialize(sead::SafeStringBase<char> const&);
    copyTexture(agl::DrawContext*, agl::TextureData const&, agl::utl::DebugTexture::Type, float, float, bool, bool, bool);
    setReference(agl::TextureData const&, agl::utl::DebugTexture::Type, float, float, bool, bool, bool);
    expand(agl::DrawContext*, agl::RenderTargetDepth const&, agl::utl::DebugTexture::Type, float, float, unsigned char, bool, bool, bool);
    copyCurrentRenderTargetColor(agl::DrawContext*, int);
    copyCurrentRenderTargetDepth(agl::DrawContext*);
    freeTexture();
    DebugTexture();
    ~DebugTexture();
    allocTexture(agl::DrawContext*, agl::TextureData const&, agl::utl::DebugTexture::Type, float, float, bool, bool, bool);
};

} } 
