#pragma once

namespace nn { namespace font { 

class ResourceTextureObject
{
public:
    GetTextureView();
    Initialize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::TMemoryPool<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, long, unsigned long);
    ~ResourceTextureObject();
    GetTextureView() const;
};

} } 
