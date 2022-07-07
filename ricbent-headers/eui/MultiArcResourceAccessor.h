#pragma once

namespace eui { 

class MultiArcResourceAccessor
{
public:
    MultiArcResourceAccessor(eui::ArcResourceMgr const*, eui::FontMgr const*);
    ~MultiArcResourceAccessor();
    isArchiveAttached(void*);
    attachArchive(void*, nn::gfx::ResTextureFile*);
    findAnimationResource(char const*, char const*, unsigned int*);
    FindResourceByName(unsigned long*, unsigned int, char const*);
    AcquireFont(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, char const*);
    AcquireTexture(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, char const*);
    AcquireShader(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, char const*);
    FindResourceByType(unsigned int, void (*)(void const*, unsigned long, char const*)) const;
    RegisterTextureViewToDescriptorPool(bool (*)(nn::gfx::DescriptorSlot*, nn::gfx::TTextureView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*), void*);
    UnregisterTextureViewFromDescriptorPool(void (*)(nn::gfx::DescriptorSlot*, nn::gfx::TTextureView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*), void*);
    Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    LoadTexture(nn::ui2d::ResourceTextureInfo*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, char const*);
    LoadShader(nn::ui2d::ShaderInfo*, nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, char const*);
    GetRuntimeTypeInfo() const;
};

} 
