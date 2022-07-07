#pragma once

namespace al { 

class BgmRelationalSituationInfo
{
public:
    createInfo(al::ByamlIter const&);
    BgmRelationalSituationInfo();
    compareInfo(al::BgmRelationalSituationInfo const*, al::BgmRelationalSituationInfo const*);
};

} 
