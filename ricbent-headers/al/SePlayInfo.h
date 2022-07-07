#pragma once

namespace al { 

class SePlayInfo
{
public:
    SePlayInfo();
    SePlayInfo(al::SePlayInfo const&);
    createInfo(al::ByamlIter const&);
    compareInfo(al::SePlayInfo const*, al::SePlayInfo const*);
    isEmpty() const;
};

} 
