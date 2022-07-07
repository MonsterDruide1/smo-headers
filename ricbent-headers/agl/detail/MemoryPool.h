#pragma once

namespace agl { namespace detail { 

class MemoryPool
{
public:
    MemoryPool();
    initialize(void*, unsigned long, agl::detail::MemoryPoolType const&);
    initialize(void*, unsigned long, agl::detail::MemoryPoolType const&, agl::detail::MemoryPool const&, int);
    finalize();
};

} } 
