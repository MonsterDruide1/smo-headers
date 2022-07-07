#pragma once

namespace al { 

class SeResourceCategoryInfo
{
public:
    createInfo(al::ByamlIter const&);
    SeResourceCategoryInfo();
    compareInfo(al::SeResourceCategoryInfo const*, al::SeResourceCategoryInfo const*);
};

} 
