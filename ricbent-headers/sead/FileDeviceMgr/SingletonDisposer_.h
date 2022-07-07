#pragma once

namespace sead { namespace FileDeviceMgr { 

class SingletonDisposer_
{
public:
    ~SingletonDisposer_();
    sStaticDisposer;
};

} } 
