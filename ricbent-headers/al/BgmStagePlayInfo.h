#pragma once

namespace al { 

class BgmStagePlayInfo
{
public:
    createInfo(al::ByamlIter const&);
    compareInfo(al::BgmStagePlayInfo const*, al::BgmStagePlayInfo const*);
    BgmStagePlayInfo();
};

} 
