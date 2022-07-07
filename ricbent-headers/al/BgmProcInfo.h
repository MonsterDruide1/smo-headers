#pragma once

namespace al { 

class BgmProcInfo
{
public:
    createInfo(al::ByamlIter const&);
    compareInfo(al::BgmProcInfo const*, al::BgmProcInfo const*);
    dummy();
    ~BgmProcInfo();
};

} 
