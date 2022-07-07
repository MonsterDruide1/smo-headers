#pragma once

namespace nn { namespace vfx { namespace detail { 

class CalculateAllocatedSizeHeap
{
public:
    Alloc(unsigned long, unsigned long);
    Free(void*);
    ~CalculateAllocatedSizeHeap();
};

} } } 
