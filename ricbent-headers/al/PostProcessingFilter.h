#pragma once

namespace al { 

class PostProcessingFilter
{
public:
    PostProcessingFilter(al::ShaderHolder*, al::NoiseTextureKeeper*);
    ~PostProcessingFilter();
    incrementPreset();
    decrementPreset();
    initProjectResource();
    endInit();
    clearRequest();
    update();
    findPreset(int) const;
    updateViewGpu(int, sead::Camera const*, al::Projection const*);
    drawFilter(agl::DrawContext*, int, al::SimpleModelEnv*, agl::RenderBuffer const&, agl::TextureData const&, agl::TextureData const&, agl::TextureData const&, sead::Camera const&, al::Projection const&, float, float, bool) const;
};

} 
