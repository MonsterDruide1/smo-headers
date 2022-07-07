#pragma once

namespace nn { namespace ui2d { 

class GraphicsResource
{
public:
    CalculateMemoryPoolSize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, unsigned int);
    CalculateMemoryPoolAlignment(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    Setup(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, int, nn::gfx::TMemoryPool<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, long, unsigned long);
    InitializeVertexBuffer(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::gfx::TMemoryPool<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, long, unsigned long);
    GetPresetBlendModeArray(nn::ui2d::ResBlendMode const**, nn::ui2d::ResBlendMode const**);
    SetupBlendStateInfo(nn::gfx::BlendStateInfo*, nn::gfx::BlendTargetStateInfo*, nn::ui2d::ResBlendMode const*, nn::ui2d::ResBlendMode const*);
    GetPresetBlendState(nn::ui2d::PresetBlendStateId);
    GetPresetBlendStateId(nn::ui2d::ResBlendMode const*, nn::ui2d::ResBlendMode const*);
    ActivateVertexBuffer(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*) const;
    GraphicsResource();
    ~GraphicsResource();
    Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    RegisterCommonSamplerSlot(bool (*)(nn::gfx::DescriptorSlot*, nn::gfx::TSampler<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*), void*);
    UnregisterCommonSamplerSlot(void (*)(nn::gfx::DescriptorSlot*, nn::gfx::TSampler<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*), void*);
    GetSamplerDescriptorSlot(nn::ui2d::TexWrap, nn::ui2d::TexWrap, nn::ui2d::TexFilter, nn::ui2d::TexFilter);
};

} } 
