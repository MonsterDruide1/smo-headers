#pragma once

namespace al { 

class RetroColorDrawer
{
public:
    RetroColorDrawer(al::ShaderHolder*);
    ~RetroColorDrawer();
    endInit();
    clearRequest();
    update();
    draw(agl::DrawContext*, agl::RenderBuffer const&, agl::TextureData const&) const;
    getCurrentParam() const;
    requestParam(int, int, al::RetroColorDrawParam const&);
};

} 
