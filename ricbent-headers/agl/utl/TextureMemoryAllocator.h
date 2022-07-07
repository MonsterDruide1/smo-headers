#pragma once

namespace agl { namespace utl { 

class TextureMemoryAllocator
{
public:
    TextureMemoryAllocator();
    ~TextureMemoryAllocator();
    initialize(agl::GPUMemVoidAddr, sead::Buffer<agl::utl::TextureMemoryAllocator::Storage>*, unsigned long, int, sead::Heap*);
    alloc(agl::utl::TextureMemoryAllocator::AllocateArg const&, agl::GPUMemVoidAddr*, bool);
    alloc_(agl::utl::TextureMemoryAllocator::MemoryBlock*, agl::utl::TextureMemoryAllocator::AllocateArg const&, agl::GPUMemVoidAddr*, bool);
    getMaxAllocatableSize() const;
    free(agl::utl::TextureMemoryAllocator::MemoryBlock*, bool);
    dump(sead::SafeStringBase<char> const&, sead::SafeStringBase<char> const&, agl::utl::TextureMemoryAllocator::MemoryBlock const&) const;
    dumpDetail() const;
    genMessageInfo(sead::SafeStringBase<char> const&, sead::hostio::Context*) const;
    isOverwrapperd(agl::utl::TextureMemoryAllocator const&) const;
    setupStorage(sead::Buffer<agl::utl::TextureMemoryAllocator::Storage>*, agl::GPUMemVoidAddr, unsigned long, sead::Heap*);
};

} } 
