#pragma once

namespace nn { namespace vfx { 

class DynamicHeap
{
public:
    ~DynamicHeap();
    Alloc(unsigned long, unsigned long);
    Free(void*);
};

} } 
