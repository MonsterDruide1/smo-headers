#pragma once

namespace al { 

class BgmChordInfo
{
public:
    BgmChordInfo();
    BgmChordInfo(al::BgmChordInfo const&);
    createInfo(al::ByamlIter const&);
    compareInfo(al::BgmChordInfo const*, al::BgmChordInfo const*);
    createInfoDefault();
};

} 
