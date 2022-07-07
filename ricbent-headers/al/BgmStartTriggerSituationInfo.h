#pragma once

namespace al { 

class BgmStartTriggerSituationInfo
{
public:
    createInfo(al::ByamlIter const&);
    compareInfo(al::BgmStartTriggerSituationInfo const*, al::BgmStartTriggerSituationInfo const*);
    BgmStartTriggerSituationInfo();
    BgmStartTriggerSituationInfo(al::BgmStartTriggerSituationInfo const&);
};

} 
