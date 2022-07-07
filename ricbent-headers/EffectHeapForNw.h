#pragma once

class EffectHeapForNw
{
public:
    ~EffectHeapForNw();
    Alloc(unsigned long, unsigned long);
    Free(void*);
};
