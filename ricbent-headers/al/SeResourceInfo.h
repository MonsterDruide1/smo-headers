#pragma once

namespace al { 

class SeResourceInfo
{
public:
    createInfo(al::ByamlIter const&);
    SeResourceInfo();
    SeResourceInfo(al::SeResourceInfo const&);
    getUsingRtpcInfo() const;
    compareInfo(al::SeResourceInfo const*, al::SeResourceInfo const*);
};

} 
