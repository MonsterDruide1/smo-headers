#pragma once

namespace al { 

class FlareFilterDirector
{
public:
    FlareFilterDirector(int);
    ~FlareFilterDirector();
    endInit();
    clearRequest();
    update();
    getCurrentParam() const;
    calcView(int, agl::cull::ViewFrustumCulling const&);
    draw(agl::DrawContext*, int, agl::RenderBuffer const&, sead::Viewport const&, agl::TextureData const&) const;
    drawToBuffer(agl::DrawContext*, int, agl::TextureData const&) const;
    requestParam(int, int, al::FlareFilterParam const&);
    isEnable() const;
};

} 
