#pragma once

namespace nn { namespace nex { 

class CacheManager
{
public:
    GetInstance();
    RegisterCache(nn::nex::BasicCache*);
    UnregisterCache(nn::nex::String const&);
    CacheManager();
    ~CacheManager();
    GetCache(nn::nex::String const&);
};

} } 
