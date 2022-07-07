#pragma once

namespace nn { namespace atk { namespace detail { namespace driver { namespace Channel { 

class Disposer
{
public:
    InvalidateData(void const*, void const*);
    ~Disposer();
};

} } } } } 
