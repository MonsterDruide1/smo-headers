#pragma once

namespace nn { namespace vfx { namespace detail { 

class CurlNoiseTexture
{
public:
    ~CurlNoiseTexture();
    Initialize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::Heap*);
    Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    RegisterTextureViewToDescriptorPool(bool (*)(nn::gfx::DescriptorSlot*, nn::gfx::TTextureView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*), void*);
    UnRegisterTextureViewToDescriptorPool(void (*)(nn::gfx::DescriptorSlot*, nn::gfx::TTextureView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*), void*);
    Invalidate();
};

} } } 
