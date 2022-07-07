#pragma once

namespace agl { namespace env { 

class CubeMap
{
public:
    CubeMap();
    ~CubeMap();
    destroyBuffer();
    initialize(sead::Heap*, agl::TextureFormat, unsigned int, unsigned int);
    initialize_();
    initialize(agl::GPUMemVoidAddr, unsigned int, agl::TextureFormat, unsigned int, unsigned int);
    initialize(sead::Heap*, agl::TextureFormat, unsigned int, unsigned int, unsigned int);
    initialize(agl::GPUMemVoidAddr, unsigned int, agl::TextureFormat, unsigned int, unsigned int, unsigned int);
    initialize(agl::TextureData const&);
    begin(agl::DrawContext*, bool, bool);
    preDraw(agl::DrawContext*, unsigned int, unsigned int);
    preDraw(agl::DrawContext*, unsigned int, unsigned int, unsigned int);
    bindRenderBuffer(agl::DrawContext*, agl::TextureData const*, unsigned int, unsigned int, agl::TextureData const*, agl::GPUMemVoidAddr, bool);
    postDraw(agl::DrawContext*, bool);
    clear(agl::DrawContext*, unsigned int, sead::Color4f const&);
    end(agl::DrawContext*);
    renderToMipMapUnit(agl::DrawContext*, agl::TextureSampler const&, agl::TextureSampler const&, unsigned int, unsigned int, unsigned int, unsigned int, float);
    renderToMipMapImpl(agl::DrawContext*, agl::TextureSampler const&, unsigned int, unsigned int, unsigned int, unsigned int, float, unsigned int);
    generateMipMapImpl(agl::DrawContext*, unsigned int, unsigned int, unsigned int, unsigned int, float);
    renderToMipMap(agl::DrawContext*, agl::TextureSampler const&, unsigned int, unsigned int, unsigned int, float);
    renderToMipMap(agl::DrawContext*, agl::TextureSampler const&, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, float);
    generateMipMap(agl::DrawContext*, unsigned int, unsigned int, unsigned int, float, bool);
    generateMipMapArray(agl::DrawContext*, unsigned int, unsigned int, unsigned int, unsigned int, float, bool);
    renderIrradiance(agl::DrawContext*, unsigned int, unsigned int);
    scDrawCubeMapScale;
};

} } 
