#pragma once

namespace agl { namespace detail { namespace ShaderHolder { 

class SingletonDisposer_
{
public:
    ~SingletonDisposer_();
    sStaticDisposer;
};

} } } 
