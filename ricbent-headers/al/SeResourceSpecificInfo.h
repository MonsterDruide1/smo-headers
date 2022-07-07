#pragma once

namespace al { 

class SeResourceSpecificInfo
{
public:
    createInfo(al::ByamlIter const&);
    compareInfo(al::SeResourceSpecificInfo const*, al::SeResourceSpecificInfo const*);
    SeResourceSpecificInfo();
    SeResourceSpecificInfo(al::SeResourceSpecificInfo const&);
};

} 
