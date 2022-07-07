#pragma once

namespace al { 

class DepthOfFieldDrawer
{
public:
    DepthOfFieldDrawer(int);
    ~DepthOfFieldDrawer();
    endInit();
    clearRequest();
    update();
    getCurrentParam() const;
    draw(agl::DrawContext*, int, agl::RenderBuffer const&, agl::TextureData const&, al::Projection const&, float, float, bool) const;
    isEnable() const;
    requestParam(int, int, al::DepthOfFieldParam const&);
};

} 
