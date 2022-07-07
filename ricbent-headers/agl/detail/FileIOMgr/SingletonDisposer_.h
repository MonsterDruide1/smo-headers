#pragma once

namespace agl { namespace detail { namespace FileIOMgr { 

class SingletonDisposer_
{
public:
    ~SingletonDisposer_();
    sStaticDisposer;
};

} } } 
