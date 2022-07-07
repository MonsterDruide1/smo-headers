#pragma once

namespace sead { namespace ParallelSZSDecompressor { 

class DecompThread
{
public:
    ~DecompThread();
    initialize(void*, unsigned int, void const*, unsigned int, unsigned int);
    requestDecompPart(unsigned int);
    DecompThread(int, sead::Heap*);
    calc_(long);
};

} } 
