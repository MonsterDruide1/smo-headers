#pragma once

namespace al { 

class BgmUserInfo
{
public:
    createInfo(al::ByamlIter const&, sead::SafeStringBase<char> const&);
    compareInfo(al::BgmUserInfo const*, al::BgmUserInfo const*);
    compareInfoByKey(al::BgmUserInfo const*, char const*);
    BgmUserInfo();
};

} 
