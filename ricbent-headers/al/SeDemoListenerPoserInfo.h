#pragma once

namespace al { 

class SeDemoListenerPoserInfo
{
public:
    createInfo(al::ByamlIter const&, char const*, int, int);
    compareInfo(al::SeDemoListenerPoserInfo const*, al::SeDemoListenerPoserInfo const*);
    SeDemoListenerPoserInfo();
    SeDemoListenerPoserInfo(al::SeDemoListenerPoserInfo const&);
    ~SeDemoListenerPoserInfo();
};

} 
