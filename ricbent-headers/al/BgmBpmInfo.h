#pragma once

namespace al { 

class BgmBpmInfo
{
public:
    createInfo(al::ByamlIter const&);
    compareInfo(al::BgmBpmInfo const*, al::BgmBpmInfo const*);
    BgmBpmInfo();
    BgmBpmInfo(al::BgmBpmInfo const&);
};

} 
