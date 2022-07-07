#pragma once

namespace agl { namespace utl { 

class DebugTexturePage
{
public:
    DebugTexturePage();
    setUp(unsigned int, sead::SafeStringBase<char> const&, sead::Heap*);
    cleanUp();
    entryTexture_(agl::DrawContext*, int, agl::TextureData const&, sead::SafeStringBase<char> const&, agl::utl::DebugTexture::Type, float, float, bool, bool, bool, bool) const;
    entryRenderTargetDepth_(agl::DrawContext*, int, agl::RenderTargetDepth const&, sead::SafeStringBase<char> const&, agl::utl::DebugTexture::Type, float, float, unsigned char, bool, bool, bool) const;
    entryBoundRenderBuffer(agl::DrawContext*, int, sead::SafeStringBase<char> const&) const;
    setActive(bool);
    clearEntryTextures_() const;
    draw_(agl::DrawContext*, sead::LogicalFrameBuffer const&, sead::Viewport const&) const;
    genNodePage_(sead::hostio::Context*);
    genMessage(sead::hostio::Context*);
    genMessagePage_(sead::hostio::Context*, sead::hostio::Reflexible*, sead::hostio::PropertyEventListener*);
    genMessagePage(sead::hostio::Context*, sead::hostio::Reflexible*);
    updateNodeMeta_();
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    invalidateHostIoNode();
    listenNodeEvent(sead::hostio::NodeEvent const*);
    ~DebugTexturePage();
};

} } 
