#pragma once

namespace al { 

class SeActionInfo
{
public:
    createInfo(al::ByamlIter const&);
    SeActionInfo();
    SeActionInfo(al::SeActionInfo const&);
    operator=(al::SeActionInfo const&);
    compareInfo(al::SeActionInfo const*, al::SeActionInfo const*);
};

} 
