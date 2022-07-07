#pragma once

namespace al { 

class BgmPitchProcInfo
{
public:
    createInfo(al::ByamlIter const&, char const*);
    BgmPitchProcInfo();
    ~BgmPitchProcInfo();
};

} 
