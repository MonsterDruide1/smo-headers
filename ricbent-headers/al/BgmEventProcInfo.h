#pragma once

namespace al { 

class BgmEventProcInfo
{
public:
    createInfo(al::BgmEventProcInfo*, al::ByamlIter const&);
    compareInfo(al::BgmEventProcInfo const*, al::BgmEventProcInfo const*);
    BgmEventProcInfo();
};

} 
