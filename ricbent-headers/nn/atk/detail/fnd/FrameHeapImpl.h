#pragma once

namespace nn { namespace atk { namespace detail { namespace fnd { namespace FrameHeapImpl {

Create(void*, unsigned long, unsigned short);
Destroy();
Alloc(unsigned long, int);
AllocFromHead(unsigned long, int);
AllocFromTail(unsigned long, int);
ResizeForMBlock(void*, unsigned long);
GetAllocatableSize(int);
Free(int);
FreeHead();
FreeTail();
RecordState(unsigned int);
FreeByState(unsigned int);
Adjust();
FreeHeadMode;
FreeTailMode;
FreeAllMode;

} } } } } 
