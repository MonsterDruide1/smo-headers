#pragma once

namespace nn { namespace font { 

class RectDrawer
{
public:
    GetWorkBufferAlignment();
    GetWorkBufferSize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, unsigned int);
    CalculateMemoryPoolSize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, unsigned int);
    CalculateMemoryPoolAlignment(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    RectDrawer();
    ~RectDrawer();
    Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    RegisterSamplerToDescriptorPool(bool (*)(nn::gfx::DescriptorSlot*, nn::gfx::TSampler<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*), void*);
    UnregisterSamplerFromDescriptorPool(void (*)(nn::gfx::DescriptorSlot*, nn::gfx::TSampler<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*), void*);
    Draw(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&, nn::font::DispStringBuffer const&) const;
    AddDrawCommand(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&, nn::font::DispStringBuffer::VertexBufferData const&, unsigned int, nn::gfx::GpuAddress const&, nn::gfx::GpuAddress const&) const;
    CreateIndices(unsigned short*, unsigned int);
    Initialize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, void*, unsigned int, nn::gfx::TMemoryPool<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, long, unsigned long);
    GetVertexShader(int) const;
    GetPixelShader(int) const;
};

} } 
