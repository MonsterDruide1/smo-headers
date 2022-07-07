#pragma once

namespace al { 

class SeDemoProcInfo
{
public:
    tryCreate(char const*);
    isChangeSituation(char const*);
    isPause(char const*);
    isStopOneShot(char const*);
    isChnageListenerPoser(char const*);
    isPlaySe(char const*);
    createInfo(al::ByamlIter const&);
    compareInfo(al::SeDemoProcInfo const*, al::SeDemoProcInfo const*);
    SeDemoProcInfo();
    SeDemoProcInfo(al::SeDemoProcInfo const&);
    ~SeDemoProcInfo();
    dummy();
};

} 
