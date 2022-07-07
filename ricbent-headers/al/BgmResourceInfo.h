#pragma once

namespace al { 

class BgmResourceInfo
{
public:
    createInfo(al::ByamlIter const&);
    compareInfo(al::BgmResourceInfo const*, al::BgmResourceInfo const*);
    BgmResourceInfo();
    BgmResourceInfo(al::BgmResourceInfo const&);
};

} 
