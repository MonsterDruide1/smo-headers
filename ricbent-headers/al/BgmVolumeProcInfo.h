#pragma once

namespace al { 

class BgmVolumeProcInfo
{
public:
    createInfo(al::ByamlIter const&, char const*);
    BgmVolumeProcInfo();
    ~BgmVolumeProcInfo();
};

} 
