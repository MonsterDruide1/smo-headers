#pragma once

namespace al { 

class BgmResourceCategoryInfo
{
public:
    createInfo(al::ByamlIter const&);
    compareInfo(al::BgmResourceCategoryInfo const*, al::BgmResourceCategoryInfo const*);
    BgmResourceCategoryInfo();
};

} 
