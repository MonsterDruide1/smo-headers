#pragma once

namespace al { 

class BloomDirector
{
public:
    BloomDirector(int);
    ~BloomDirector();
    clearRequest();
    update();
    preDrawGraphics(al::Projection const&);
    getCurrentReduceScale() const;
    applyParameter(agl::pfx::Bloom*, int) const;
    draw(agl::DrawContext*, int, agl::RenderBuffer const&, agl::TextureData const*, agl::TextureData const*, bool) const;
    isEnable() const;
    drawToBloomBuffer(agl::DrawContext*, int, agl::RenderBuffer const&, sead::Viewport const&, agl::TextureData const*, agl::TextureData const*, bool) const;
    release(int);
    requestParam(int, int, al::BloomParam const&);
    getCurrentParam() const;
    setUseMipLevel(bool);
    getDepthOffsetStart() const;
    getDepthOffsetEnd() const;
    getDepthOffset() const;
};

} 
