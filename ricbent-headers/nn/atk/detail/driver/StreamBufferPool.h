#pragma once

namespace nn { namespace atk { namespace detail { namespace driver { namespace StreamBufferPool {

Initialize(void*, unsigned long, int);
Finalize();
Alloc();
Free(void*);
BlockMax;
BitPerByte;

} } } } } 
