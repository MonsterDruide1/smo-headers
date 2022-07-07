#pragma once

namespace al { 

class BgmStageInfo
{
public:
    createInfo(al::ByamlIter const&);
    compareInfo(al::BgmStageInfo const*, al::BgmStageInfo const*);
    BgmStageInfo();
};

} 
