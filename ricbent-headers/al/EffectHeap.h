#pragma once

namespace al { 

class EffectHeap
{
public:
    create(unsigned int, char const*);
    EffectHeap(char const*, void*, unsigned int);
    tryAlloc(unsigned long, int);
    ~EffectHeap();
};

} 
