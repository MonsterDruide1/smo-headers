#pragma once

namespace agl { namespace utl { 

class MultiFilter
{
public:
    MultiFilter();
    ~MultiFilter();
    freeResultTexture() const;
    initialize(sead::Heap*, sead::Heap*);
    setUseTextureAlpha(bool);
    calcResultInfo(int, int) const;
    draw(agl::DrawContext*, agl::TextureData const&) const;
    drawFilter_(agl::DrawContext*, agl::utl::MultiFilterUnit const&, int) const;
    draw(agl::DrawContext*, agl::TextureData const&, sead::Vector2<float> const&, sead::Vector2<float> const&) const;
    drawDebug(agl::DrawContext*, sead::LogicalFrameBuffer const&, sead::Viewport const&) const;
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    addFilter_(agl::utl::MultiFilterUnit::FilterType);
    inactivateAll();
    preWrite_() const;
    postRead_();
};

} } 
