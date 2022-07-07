#pragma once

namespace sead { 

class MessageProject
{
public:
    ~MessageProject();
    initialize(void*, sead::Heap*);
    allocForLibms_(unsigned long);
    freeForLibms_(void*);
    finalize();
    getInitializeData() const;
    sHeap;
};

} 
