#pragma once

namespace al { 

class BgmSituationInfo
{
public:
    createInfo(al::ByamlIter const&);
    BgmSituationInfo();
    compareInfo(al::BgmSituationInfo const*, al::BgmSituationInfo const*);
};

} 
