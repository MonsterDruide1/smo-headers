#pragma once

namespace nn { namespace vfx { namespace detail { 

class BufferAllocator
{
public:
    Initialize(nn::vfx::detail::BufferAllocator::InitializeArg&);
    Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    Alloc(unsigned long, unsigned long);
    Free(void*, bool);
    _Free(void*);
    FlushFreeList();
    ~BufferAllocator();
};

} } } 
