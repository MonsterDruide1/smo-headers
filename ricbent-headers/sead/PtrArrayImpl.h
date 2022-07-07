#pragma once

namespace sead { namespace PtrArrayImpl {

setBuffer(int, void*);
allocBuffer(int, sead::Heap*, int);
tryAllocBuffer(int, sead::Heap*, int);
freeBuffer();
erase(int, int);
reverse();
shuffle(sead::Random*);
insert(int, void*);
checkInsert(int, int);
insertArray(int, void*, int, int);
sort(int (*)(void const*, void const*));
heapSort(int (*)(void const*, void const*));
compare(sead::PtrArrayImpl const&, int (*)(void const*, void const*)) const;
uniq(int (*)(void const*, void const*));
binarySearch(void const*, int (*)(void const*, void const*)) const;

} } 
