#pragma once

namespace al { 

class SeMaterialInfo
{
public:
    createInfo(al::ByamlIter const&);
    compareInfo(al::SeMaterialInfo const*, al::SeMaterialInfo const*);
    SeMaterialInfo();
    SeMaterialInfo(al::SeMaterialInfo const&);
};

} 
