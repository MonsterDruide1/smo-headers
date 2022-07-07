#pragma once

namespace al { 

class SeDemoStopOneShotInfo
{
public:
    createInfo(al::ByamlIter const&, char const*, int, int);
    compareInfo(al::SeDemoStopOneShotInfo const*, al::SeDemoStopOneShotInfo const*);
    SeDemoStopOneShotInfo();
    SeDemoStopOneShotInfo(al::SeDemoStopOneShotInfo const&);
    ~SeDemoStopOneShotInfo();
};

} 
