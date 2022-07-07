#pragma once

namespace al { 

class SeEmitterInfo
{
public:
    createInfo(al::ByamlIter const&);
    duplicateInfo(al::SeEmitterInfo const*);
    SeEmitterInfo();
    SeEmitterInfo(char const*);
    SeEmitterInfo(al::SeEmitterInfo const&);
    compareInfo(al::SeEmitterInfo const*, al::SeEmitterInfo const*);
};

} 
