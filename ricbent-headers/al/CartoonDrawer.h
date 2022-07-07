#pragma once

namespace al { 

class CartoonDrawer
{
public:
    CartoonDrawer(al::ShaderHolder*, al::NoiseTextureKeeper*);
    ~CartoonDrawer();
    initProjectResource(nn::g3d::ResFile*);
    endInit();
    clearRequest();
    update();
    draw(agl::DrawContext*, al::SimpleModelEnv*, agl::RenderBuffer const&, agl::TextureData const*, float) const;
    getCurrentParam() const;
    requestParam(int, int, al::CartoonDrawParam const&);
    isEnable() const;
};

} 
