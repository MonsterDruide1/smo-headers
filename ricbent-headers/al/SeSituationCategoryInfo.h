#pragma once

namespace al { 

class SeSituationCategoryInfo
{
public:
    createInfo(al::ByamlIter const&);
    compareInfo(al::SeSituationCategoryInfo const*, al::SeSituationCategoryInfo const*);
    SeSituationCategoryInfo();
};

} 
