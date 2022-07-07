#pragma once

namespace al { 

class PencilSketchDrawer
{
public:
    PencilSketchDrawer(al::ShaderHolder*);
    ~PencilSketchDrawer();
    endInit();
    clearRequest();
    update();
    draw(agl::DrawContext*, al::SimpleModelEnv*, agl::RenderBuffer const&, agl::TextureData const*) const;
    getCurrentParam() const;
    requestParam(int, int, al::PencilSketchDrawParam const&);
    isEnable() const;
};

} 
