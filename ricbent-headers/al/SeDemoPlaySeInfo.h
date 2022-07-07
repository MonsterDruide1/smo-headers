#pragma once

namespace al { 

class SeDemoPlaySeInfo
{
public:
    createInfo(al::ByamlIter const&, char const*, int, int);
    compareInfo(al::SeDemoPlaySeInfo const*, al::SeDemoPlaySeInfo const*);
    SeDemoPlaySeInfo();
    SeDemoPlaySeInfo(al::SeDemoPlaySeInfo const&);
    ~SeDemoPlaySeInfo();
};

} 
