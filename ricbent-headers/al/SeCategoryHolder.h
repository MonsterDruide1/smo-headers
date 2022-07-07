#pragma once

namespace al { 

class SeCategoryHolder
{
public:
    SeCategoryHolder(al::AudioInfoListWithParts<al::SeResourceCategoryInfo> const*);
    update();
    tryFindCategory(int);
    tryFindCategoryByName(char const*);
};

} 
