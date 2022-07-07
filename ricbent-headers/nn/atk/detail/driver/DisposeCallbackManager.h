#pragma once

namespace nn { namespace atk { namespace detail { namespace driver { 

class DisposeCallbackManager
{
public:
    GetInstance();
    DisposeCallbackManager();
    RegisterDisposeCallback(nn::atk::detail::driver::DisposeCallback*);
    UnregisterDisposeCallback(nn::atk::detail::driver::DisposeCallback*);
    GetCallbackCount() const;
    Dispose(void const*, unsigned long);
};

} } } } 
