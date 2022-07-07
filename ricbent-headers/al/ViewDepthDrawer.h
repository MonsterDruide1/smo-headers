#pragma once

namespace al { 

class ViewDepthDrawer
{
public:
    ViewDepthDrawer(al::ShaderHolder*);
    endInit();
    clearRequest();
    update();
    draw(agl::DrawContext*, agl::RenderBuffer const&, float, float, agl::TextureData const&) const;
    getCurrentParam() const;
    requestParam(int, int, al::ViewDepthDrawParam const&);
    isEnable() const;
};

} 
