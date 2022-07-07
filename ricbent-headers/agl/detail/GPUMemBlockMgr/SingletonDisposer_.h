#pragma once

namespace agl { namespace detail { namespace GPUMemBlockMgr { 

class SingletonDisposer_
{
public:
    ~SingletonDisposer_();
    sStaticDisposer;
};

} } } 
