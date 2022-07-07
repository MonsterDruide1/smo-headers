#pragma once

namespace al { 

class SeSituationInfo
{
public:
    createInfo(al::ByamlIter const&);
    compareInfo(al::SeSituationInfo const*, al::SeSituationInfo const*);
    SeSituationInfo();
};

} 
