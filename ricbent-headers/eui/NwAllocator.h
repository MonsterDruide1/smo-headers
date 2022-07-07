#pragma once

namespace eui { namespace NwAllocator {

initialize(sead::Heap*);
ui2dAllocateFunction(unsigned long, unsigned long, void*);
ui2dDeallocateFunction(void*, void*);
finalize();
ui2dDeallocateFunctionWithFindContainHeap(void*, void*);

} } 
