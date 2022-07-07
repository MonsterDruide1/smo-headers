#pragma once

namespace al { 

class SeDemoSituationInfo
{
public:
    createInfo(al::ByamlIter const&, char const*, int, int);
    compareInfo(al::SeDemoSituationInfo const*, al::SeDemoSituationInfo const*);
    SeDemoSituationInfo();
    SeDemoSituationInfo(al::SeDemoSituationInfo const&);
    ~SeDemoSituationInfo();
};

} 
