#pragma once

namespace al { 

class BgmResourceSpecificInfo
{
public:
    createInfo(al::ByamlIter const&);
    BgmResourceSpecificInfo();
    BgmResourceSpecificInfo(al::BgmResourceSpecificInfo const&);
};

} 
