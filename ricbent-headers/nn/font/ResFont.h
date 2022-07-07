#pragma once

namespace nn { namespace font { 

class ResFont
{
public:
    RevertResource(void*);
    ResFont();
    ~ResFont();
    Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    RemoveResource(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    SetResource(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, void*, nn::gfx::TMemoryPool<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, long, unsigned long);
    Rebuild(nn::font::detail::BinaryFileHeader*);
    Unrelocate(void*);
    GetRuntimeTypeInfo() const;
};

} } 
