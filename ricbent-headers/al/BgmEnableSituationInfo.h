#pragma once

namespace al { 

class BgmEnableSituationInfo
{
public:
    createInfo(al::ByamlIter const&);
    compareInfo(al::BgmEnableSituationInfo const*, al::BgmEnableSituationInfo const*);
    BgmEnableSituationInfo();
    BgmEnableSituationInfo(al::BgmEnableSituationInfo const&);
};

} 
