#pragma once

namespace al { 

class ScreenFader
{
public:
    ScreenFader();
    start(int, int, float, sead::Color4f const&);
    end(int);
    update();
    tryDraw(agl::DrawContext*, sead::Viewport const&, agl::RenderBuffer const&) const;
};

} 
