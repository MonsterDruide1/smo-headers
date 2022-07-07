#pragma once

namespace agl { namespace detail { namespace PrivateResource { 

class SingletonDisposer_
{
public:
    ~SingletonDisposer_();
    sStaticDisposer;
};

} } } 
