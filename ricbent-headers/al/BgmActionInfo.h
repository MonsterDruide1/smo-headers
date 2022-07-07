#pragma once

namespace al { 

class BgmActionInfo
{
public:
    createInfo(al::ByamlIter const&);
    compareInfo(al::BgmActionInfo const*, al::BgmActionInfo const*);
    compareInfoByKey(al::BgmActionInfo const*, char const*);
    BgmActionInfo();
};

} 
