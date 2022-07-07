#pragma once

namespace al { 

class BgmSourceInfo
{
public:
    createInfo(al::ByamlIter const&);
    compareInfo(al::BgmSourceInfo const*, al::BgmSourceInfo const*);
    BgmSourceInfo();
};

} 
