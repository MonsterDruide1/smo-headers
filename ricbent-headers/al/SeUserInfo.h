#pragma once

namespace al { 

class SeUserInfo
{
public:
    createInfo(al::ByamlIter const&, sead::SafeStringBase<char> const&);
    isIncludingSePartsUser(al::SeUserInfo const*);
    SeUserInfo();
    ~SeUserInfo();
    compareInfo(al::SeUserInfo const*, al::SeUserInfo const*);
};

} 
