#pragma once

namespace al { 

class BgmBiquadBpfProcInfo
{
public:
    createInfo(al::ByamlIter const&, char const*);
    BgmBiquadBpfProcInfo();
    ~BgmBiquadBpfProcInfo();
};

} 
