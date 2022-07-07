#pragma once

namespace nn { namespace init { namespace detail {

DefaultAllocatorForThreadLocal(unsigned long, unsigned long);
DefaultDeallocatorForThreadLocal(void*, unsigned long);

} } } 
