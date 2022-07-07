#pragma once

namespace nn { namespace vfx { 

class Resource
{
public:
    Resource(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::Heap*, void*, nn::gfx::TMemoryPool<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, unsigned long, unsigned long, int, nn::vfx::System*, bool, nn::vfx::Resource*);
    Trace(nn::vfx::detail::BinaryData*);
    ~Resource();
    Finalize(nn::vfx::Heap*);
    TraceGfxResTextureFile(nn::vfx::detail::BinaryData*);
    TracePrimitiveArray(nn::vfx::detail::BinaryData*);
    TraceG3dPrimitiveArray(nn::vfx::detail::BinaryData*);
    TraceShaderBinaryArray(nn::vfx::detail::BinaryData*);
    TraceEmitterSetArray(nn::vfx::detail::BinaryData*, nn::vfx::detail::BufferSizeCalculator*);
    InitializeEmitterGraphicsResource(nn::vfx::EmitterResource*);
    FinalizeEmitterResource(nn::vfx::EmitterResource*);
    Unrelocate(void*);
    RegisterTextureViewToDescriptorPool(bool (*)(nn::gfx::DescriptorSlot*, nn::gfx::TTextureView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*), void*);
    GetTextureDescriptorSlot(nn::gfx::DescriptorSlot*, unsigned long) const;
    SearchRecordFromResNameTable(nn::vfx::detail::ResNameTableRecord*, unsigned long);
    BindExternalResTextureFile(nn::gfx::ResTextureFile*);
    UnregisterTextureViewFromDescriptorPool(void (*)(nn::gfx::DescriptorSlot*, nn::gfx::TTextureView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, void*), void*);
    BindExternalG3dResFile(nn::g3d::ResFile*);
    BindExternalResShaderFile(nn::gfx::ResShaderFile*, nn::gfx::ResShaderFile*);
    InitializeEmitterSetResource(nn::vfx::EmitterSetResource*, nn::vfx::detail::BufferSizeCalculator*);
    InitializeEmitterResource(nn::vfx::EmitterResource*, nn::vfx::detail::BinaryData*, int, nn::vfx::detail::BufferSizeCalculator*);
    GetPrimitive(unsigned long) const;
    GetG3dPrimitive(unsigned long) const;
    SearchEmitterSetId(char const*) const;
    SearchEmitterSetIdWithFilePath(char const*) const;
    BindResource(int, nn::vfx::EmitterSetResource*);
    UnbindResource(int);
    IsExistChildEmitter(int) const;
    IsNeedFade(int) const;
    OutputResourceInfo() const;
};

} } 
