#pragma once

namespace al { 

class BgmMusicalInfo
{
public:
    createInfo(al::ByamlIter const&, char const*);
    compareInfo(al::BgmMusicalInfo const*, al::BgmMusicalInfo const*);
    BgmMusicalInfo();
    BgmMusicalInfo(al::BgmMusicalInfo const&);
};

} 
