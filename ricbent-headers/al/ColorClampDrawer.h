#pragma once

namespace al { 

class ColorClampDrawer
{
public:
    ColorClampDrawer(al::ShaderHolder*);
    endInit();
    clearRequest();
    update();
    draw(agl::DrawContext*, agl::RenderBuffer const&) const;
    getCurrentParam() const;
    requestParam(int, int, al::ColorClampDrawParam const&);
    isEnable() const;
};

} 
