#pragma once

namespace nn { namespace vfx { namespace detail { 

class Attribute
{
public:
    Attribute();
    Initialize(nn::vfx::detail::BufferAllocator*, int, unsigned long);
    Finalize();
    Map(nn::vfx::BufferSide);
    Unmap();
    GetGpuAddress(nn::vfx::BufferSide) const;
};

} } } 
