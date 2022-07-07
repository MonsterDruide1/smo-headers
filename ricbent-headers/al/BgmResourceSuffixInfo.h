#pragma once

namespace al { 

class BgmResourceSuffixInfo
{
public:
    createInfo(al::ByamlIter const&);
    compareInfo(al::BgmResourceSuffixInfo const*, al::BgmResourceSuffixInfo const*);
    BgmResourceSuffixInfo();
    BgmResourceSuffixInfo(al::BgmResourceSuffixInfo const&);
};

} 
