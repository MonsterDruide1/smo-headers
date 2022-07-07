#pragma once

namespace agl { namespace detail { namespace AtomicPtrArrayImpl {

setBuffer(int, void*);
allocBuffer(int, sead::Heap*, int);
freeBuffer();
erase(int, int);
shuffle(sead::Random*);
sort(int (*)(void const*, void const*));
heapSort(int (*)(void const*, void const*));

} } } 
