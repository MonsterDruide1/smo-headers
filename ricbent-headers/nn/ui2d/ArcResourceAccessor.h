#pragma once

namespace nn { namespace ui2d { 

class ArcResourceAccessor
{
public:
    ArcResourceAccessor();
    ~ArcResourceAccessor();
    Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    Attach(void*, char const*, nn::gfx::TMemoryPool<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, long, unsigned long);
    Detach();
    FindResourceByName(unsigned long*, unsigned int, char const*);
    FindResourceByType(unsigned int, void (*)(void const*, unsigned long, char const*)) const;
    LoadTexture(nn::ui2d::ResourceTextureInfo*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, char const*);
    LoadFont(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, char const*);
    LoadShader(nn::ui2d::ShaderInfo*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, char const*);
    AcquireFont(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, char const*);
    RegisterFont(char const*, nn::font::Font*);
    UnregisterFont(void const*);
    AcquireTexture(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, char const*);
    RegisterTexture(char const*);
    UnregisterTexture(nn::ui2d::TextureInfo*);
    AcquireShader(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, char const*);
    RegisterShader(char const*, bool);
    UnregisterShader(nn::ui2d::ShaderInfo*);
    RegisterTextureViewToDescriptorPool(bool (*)(nn::gfx::DescriptorSlot*, nn::gfx::TTextureView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*), void*);
    UnregisterTextureViewFromDescriptorPool(void (*)(nn::gfx::DescriptorSlot*, nn::gfx::TTextureView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*), void*);
    GetRuntimeTypeInfo() const;
    FindResourceByName(unsigned long*, unsigned int, char const*) const;
    FindResourceByName(unsigned int, char const*);
    FindResourceByName(unsigned int, char const*) const;
};

} } 
