#pragma once

namespace sead { namespace ptcl { 

class Heap
{
public:
    ~Heap();
    Alloc(unsigned long, unsigned long);
    Free(void*);
};

} } 
