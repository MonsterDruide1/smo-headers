#pragma once

namespace agl { 

class GPUMemBlockBase
{
public:
    GPUMemBlockBase();
    clear();
    ~GPUMemBlockBase();
    freeBuffer();
    free();
    allocBuffer_(unsigned long, sead::Heap*, int, agl::MemoryAttribute);
    tryAllocBuffer_(unsigned long, sead::Heap*, int, agl::MemoryAttribute);
    setBuffer_(unsigned long, void*, void*, agl::MemoryAttribute);
    setVirtual_(unsigned long, sead::Heap*, agl::MemoryAttribute, agl::GPUMemVoidAddr, int);
    initializeGfxMemoryPool(nn::gfx::TMemoryPool<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*) const;
    addList(agl::GPUMemBlockBase*);
    setMemoryPool(void*, unsigned long, agl::detail::MemoryPool*);
    setMemoryPoolHeap(void*, unsigned long, agl::detail::MemoryPoolHeap*);
    getByteOffset() const;
    getMemoryPoolType() const;
};

} 
