#pragma once

namespace agl { namespace utl { 

class DynamicTextureAllocator
{
public:
    createInstance(sead::Heap*);
    deleteInstance();
    DynamicTextureAllocator();
    ~DynamicTextureAllocator();
    initialize(int, unsigned long, unsigned long, sead::Heap*, sead::Heap*);
    setDebugHeap(sead::Heap*);
    calc();
    alloc(agl::DrawContext*, sead::SafeStringBase<char> const&, agl::TextureFormat, unsigned int, unsigned int, unsigned int, agl::GPUMemVoidAddr*, agl::utl::DynamicTextureAllocator::AllocateType, bool, bool);
    alloc_(agl::DrawContext*, agl::utl::DynamicTextureAllocator::Context*, sead::SafeStringBase<char> const&, agl::TextureFormat, agl::TextureType, unsigned int, unsigned int, unsigned int, agl::MultiSampleType, unsigned int, agl::GPUMemVoidAddr*, bool, agl::utl::DynamicTextureAllocator::AllocateType, bool, bool);
    allocArray(agl::DrawContext*, sead::SafeStringBase<char> const&, agl::TextureFormat, unsigned int, unsigned int, unsigned int, unsigned int, agl::GPUMemVoidAddr*, agl::utl::DynamicTextureAllocator::AllocateType, bool, bool);
    alloc3D(agl::DrawContext*, sead::SafeStringBase<char> const&, agl::TextureFormat, unsigned int, unsigned int, unsigned int, unsigned int, agl::GPUMemVoidAddr*, agl::utl::DynamicTextureAllocator::AllocateType, bool, bool);
    allocCube(agl::DrawContext*, sead::SafeStringBase<char> const&, agl::TextureFormat, unsigned int, unsigned int, agl::GPUMemVoidAddr*, agl::utl::DynamicTextureAllocator::AllocateType, bool, bool);
    allocCubeArray(agl::DrawContext*, sead::SafeStringBase<char> const&, agl::TextureFormat, unsigned int, unsigned int, unsigned int, agl::GPUMemVoidAddr*, agl::utl::DynamicTextureAllocator::AllocateType, bool, bool);
    allocMultiSample(agl::DrawContext*, sead::SafeStringBase<char> const&, agl::TextureFormat, unsigned int, unsigned int, agl::MultiSampleType, agl::GPUMemVoidAddr*, agl::utl::DynamicTextureAllocator::AllocateType, bool, bool);
    allocWithoutContext(agl::DrawContext*, sead::SafeStringBase<char> const&, agl::TextureFormat, unsigned int, unsigned int, unsigned int, agl::GPUMemVoidAddr*, agl::utl::DynamicTextureAllocator::AllocateType, bool, bool);
    allocWithoutContext(agl::DrawContext*, sead::SafeStringBase<char> const&, agl::TextureData const&, agl::GPUMemVoidAddr*, agl::utl::DynamicTextureAllocator::AllocateType, bool, bool);
    allocArrayWithoutContext(agl::DrawContext*, sead::SafeStringBase<char> const&, agl::TextureFormat, unsigned int, unsigned int, unsigned int, unsigned int, agl::GPUMemVoidAddr*, agl::utl::DynamicTextureAllocator::AllocateType, bool, bool);
    alloc3DWithoutContext(agl::DrawContext*, sead::SafeStringBase<char> const&, agl::TextureFormat, unsigned int, unsigned int, unsigned int, unsigned int, agl::GPUMemVoidAddr*, agl::utl::DynamicTextureAllocator::AllocateType, bool, bool);
    allocCubeWithoutContext(agl::DrawContext*, sead::SafeStringBase<char> const&, agl::TextureFormat, unsigned int, unsigned int, agl::GPUMemVoidAddr*, agl::utl::DynamicTextureAllocator::AllocateType, bool, bool);
    allocCubeArrayWithoutContext(agl::DrawContext*, sead::SafeStringBase<char> const&, agl::TextureFormat, unsigned int, unsigned int, unsigned int, agl::GPUMemVoidAddr*, agl::utl::DynamicTextureAllocator::AllocateType, bool, bool);
    allocMultiSampleWithoutContext(agl::DrawContext*, sead::SafeStringBase<char> const&, agl::TextureFormat, unsigned int, unsigned int, agl::MultiSampleType, agl::GPUMemVoidAddr*, agl::utl::DynamicTextureAllocator::AllocateType, bool, bool);
    free(agl::TextureData const*);
    free_(agl::TextureData const*);
    beginCache();
    endCache();
    queryTextureMemoryInfo(agl::utl::TextureMemoryAllocator::MemoryBlock const*, char const**, int*) const;
    isValid_(agl::utl::DynamicTextureAllocator::Context const*) const;
    dumpAll() const;
    isContextValid_(agl::utl::DynamicTextureAllocator::Context const*) const;
    dump_(int) const;
    getUseSize() const;
    getUseSizeWithoutContext() const;
    dump() const;
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    sInstance;
};

} } 
