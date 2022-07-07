#pragma once

namespace sead { 

class MessageSetBase
{
public:
    ~MessageSetBase();
    initialize(void*, sead::Heap*);
    allocForLibms_(unsigned long);
    freeForLibms_(void*);
    finalize();
    getInitializeData() const;
    calcTextSizeByIndex(int) const;
    searchTextLabelByIndex(sead::BufferedSafeStringBase<char>*, int) const;
    sHeap;
};

} 
