#pragma once

namespace agl { namespace utl { namespace DebugTexturePage { 

class Context
{
public:
    pushBack(agl::utl::DebugTexture*, sead::SafeStringBase<char> const&) const;
    draw(agl::DrawContext*, sead::LogicalFrameBuffer const&, sead::Viewport const&, agl::utl::DebugTexturePage::DrawOption const&) const;
    clearEntryTextures() const;
    genMessageContextComboBox(sead::hostio::Context*, bool, sead::hostio::PropertyEventListener*);
    genMessageContextParameter(sead::hostio::Context*, bool, sead::hostio::PropertyEventListener*);
    Context();
    ~Context();
    setUp(agl::utl::DebugTexturePage const*, sead::Heap*);
    searchFullScreenTexture() const;
    calcTextureDrawSize_(agl::TextureData const&) const;
    drawTexture_(agl::DrawContext*, agl::utl::DebugTexture const&, sead::Viewport const&, sead::Vector2<float> const&, sead::Vector2<float> const&, agl::utl::DebugTexturePage::DrawOption const&, bool) const;
    drawLabel_(agl::DrawContext*, sead::SafeStringBase<char> const&, agl::TextureData const&, sead::Viewport const&, sead::Vector2<float> const&, bool, bool) const;
    copyTextureLabel() const;
    listenPropertyEventContext(sead::hostio::PropertyEvent const*);
};

} } } 
