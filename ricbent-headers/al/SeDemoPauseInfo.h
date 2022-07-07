#pragma once

namespace al { 

class SeDemoPauseInfo
{
public:
    createInfo(al::ByamlIter const&, char const*, int, int);
    compareInfo(al::SeDemoPauseInfo const*, al::SeDemoPauseInfo const*);
    SeDemoPauseInfo();
    SeDemoPauseInfo(al::SeDemoPauseInfo const&);
    ~SeDemoPauseInfo();
};

} 
