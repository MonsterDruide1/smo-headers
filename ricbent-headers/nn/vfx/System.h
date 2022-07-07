#pragma once

namespace nn { namespace vfx { 

class System
{
public:
    System(nn::vfx::Config const&);
    Initialize(nn::vfx::Heap*, nn::vfx::Heap*, nn::vfx::Config const&);
    ~System();
    EntryResource(nn::vfx::Heap*, void*, nn::gfx::TMemoryPool<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, unsigned long, unsigned long, int, bool, nn::vfx::Resource*);
    ClearResource(nn::vfx::Heap*, int);
    EntryResource(nn::vfx::Heap*, void*, int, bool, nn::vfx::Resource*);
    AllocEmitterSet();
    AllocEmitter();
    InitializeEmitter(nn::vfx::Emitter*);
    FinalizeEmitter(nn::vfx::Emitter*);
    CreateEmitterSetId(nn::vfx::Handle*, int, int, int, int, nn::vfx::Heap*, bool);
    AddEmitterSetList(nn::vfx::EmitterSet*, int);
    AddDelayCreateEmitterSetList(nn::vfx::EmitterSet*, int);
    CreateEmitterSetId(nn::vfx::Handle*, int, int, int, nn::vfx::Heap*, bool);
    CreateManualEmitterSetId(nn::vfx::Handle*, int, int, int, int, int, nn::vfx::EmitReservationInfo*, nn::vfx::Heap*, nn::vfx::CallbackSet*, int);
    ReCreateEmitterSet(int, int);
    RecreateEmitterSet2(char const*, int, int);
    KillEmitterSet(nn::vfx::EmitterSet*, bool);
    KillEmitterSet(char const*, int);
    RemoveDelayCreateEmitterSetList(nn::vfx::EmitterSet*);
    KillEmitterSetGroup(int);
    KillAllEmitterSet();
    RemoveEmitterSetList(nn::vfx::EmitterSet*);
    BeginFrame();
    Calculate(nn::vfx::EmitterSet*, float, nn::vfx::BufferSwapMode);
    Calculate(int, float, nn::vfx::BufferSwapMode);
    FlushGpuCache();
    SetViewParam(int, nn::vfx::ViewParam*);
    SetViewParam(int, nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::ViewParam*);
    Draw(int, nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, int, unsigned int, bool, bool, void*);
    AddSortBuffer(int, int, unsigned int);
    DrawSortBuffer(int, nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, bool, void*);
    DrawEmitter(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::Emitter*, bool, void*, nn::vfx::DrawParameterArg*);
    SwapBuffer();
    AllocFromTempBuffer(int, nn::gfx::GpuAddress*, unsigned long);
    FlushTempBuffer();
    UpdateFromResource(nn::vfx::EmitterResource*, bool);
    SearchEmitterSetId(char const*, int) const;
    SearchEmitterSetName(int, int) const;
    SetDrawPathRenderStateSetCallback(nn::vfx::DrawPathCallbackId, nn::vfx::DrawPathFlag, void (*)(nn::vfx::RenderStateSetArg&));
    SetDrawPathRenderStateSetCallback(nn::vfx::DrawPathFlag, void (*)(nn::vfx::RenderStateSetArg&));
    GetDrawPathRenderStateSetCallback(nn::vfx::DrawPathFlag);
    AddComputeShaderEmitterList(nn::vfx::Emitter*);
    BatchCalculationComputeShaderEmitter(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, void*, unsigned int);
    GetSortedParticleList(nn::vfx::detail::SortData**, int*, nn::vfx::Emitter*, nn::vfx::detail::ParticleSortType, int) const;
    InvokeBeforeRenderCallbacks(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::Emitter*, nn::vfx::ShaderType, void*, nn::vfx::DrawParameterArg*);
    BindCustomShaderTexture(int, nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::CustomShaderTextureType, nn::gfx::DescriptorSlot);
    RegisterTextureViewToDescriptorPool(bool (*)(nn::gfx::DescriptorSlot*, nn::gfx::TTextureView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*), void*);
    UnregisterTextureViewFromDescriptorPool(void (*)(nn::gfx::DescriptorSlot*, nn::gfx::TTextureView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*), void*);
    RegisterSamplerToDescriptorPool(bool (*)(nn::gfx::DescriptorSlot*, nn::gfx::TSampler<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*), void*);
    UnregisterSamplerFromDescriptorPool(void (*)(nn::gfx::DescriptorSlot*, nn::gfx::TSampler<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*), void*);
    g_IsInitialized;
};

} } 
