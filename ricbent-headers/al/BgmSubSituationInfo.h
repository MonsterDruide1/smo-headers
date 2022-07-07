#pragma once

namespace al { 

class BgmSubSituationInfo
{
public:
    createInfo(al::ByamlIter const&);
    BgmSubSituationInfo();
    compareInfo(al::BgmSubSituationInfo const*, al::BgmSubSituationInfo const*);
};

} 
