#pragma once

namespace al { 

class BgmDemoProcInfo
{
public:
    createInfo(al::ByamlIter const&);
    compareInfo(al::BgmDemoProcInfo const*, al::BgmDemoProcInfo const*);
    BgmDemoProcInfo();
    BgmDemoProcInfo(al::BgmDemoProcInfo const&);
};

} 
