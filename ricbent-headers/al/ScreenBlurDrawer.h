#pragma once

namespace al { 

class ScreenBlurDrawer
{
public:
    ScreenBlurDrawer(int);
    ~ScreenBlurDrawer();
    endInit();
    clearRequest();
    update();
    getCurrentParam() const;
    updateViewGpu(int, sead::Matrix34<float> const&, sead::Matrix44<float> const&);
    draw(agl::DrawContext*, int, agl::RenderBuffer const&) const;
    requestParam(int, int, al::ScreenBlurDrawParam const&);
};

} 
