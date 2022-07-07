#pragma once

namespace al { 

class BgmStageScenarioInfo
{
public:
    createInfo(al::ByamlIter const&);
    compareInfo(al::BgmStageScenarioInfo const*, al::BgmStageScenarioInfo const*);
    BgmStageScenarioInfo();
};

} 
